/******************************************************************************
 * @file     QConfigStorage.h
 * 
 * @brief    
 * 
 * @date     02-12-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef QCONFIGSTORAGE_H_
#define QCONFIGSTORAGE_H_

#define ORGANIZATION_NAME "RAFi"
#define APPLICATION_NAME  "RS232TestNG"


#include <QSettings>
#include <QMutex>
#include <QMutexLocker>
/*
 *
 */
#define CONF_START_GROUP(_name_not_as_string_) \
    QConfigStorageGroupCreator config_group_##_name_not_as_string_ ( #_name_not_as_string_ );

#define CONF_END_GROUP(_name_not_as_string_) \
    config_group_##_name_not_as_string_.EndGroup();

#define CONF_READ_VAL( _variable_ , _default_ ) QConfigStorage::getVal( #_variable_ , &_variable_ , _default_ );
#define CONF_STORE_VAL( _variable_ ) QConfigStorage::setVal( #_variable_ , _variable_ );

class QConfigStorage
{

private:
    static QConfigStorage s;

    QSettings             storage;
    QMutex                lock;
public:

    static QConfigStorage& instance() { return QConfigStorage::s; }

    static QMutex& getConfigStorageLock() { return s.lock; }
    static void Lock()   { s.lock.lock(); }
    static void Unlock() { s.lock.unlock(); }


    static void BeginGroup(const char* name) { s.storage.beginGroup( name ); }
    static void EndGroup() { s.storage.endGroup(); }

    static void setVal(const char* key, const QVariant& value) { s.storage.setValue(key,value); }
    static void getVal(const char* key, QVariant & value, const QVariant& defval) { value = s.storage.value(key,defval); }
    static void getVal(const char* key, int* value, int defval) { if (value) *value = s.storage.value(key,defval).toInt(); }
    static void getVal(const char* key, QString* value, const QString& defval) { if (value) *value = s.storage.value(key,defval).toString(); }

    QConfigStorage():
        storage(ORGANIZATION_NAME,APPLICATION_NAME),
        lock(QMutex::Recursive)
    {

    }
    ~QConfigStorage()
    {
        storage.sync();
    }
};

class QConfigStorageGroupCreator
{
private:
    bool isCreated;
    QConfigStorageGroupCreator();
public:
    QConfigStorageGroupCreator(const char* groupName)
    {
        QConfigStorage::Lock();
        QConfigStorage::BeginGroup(groupName);
        isCreated = true;
    }
    void EndGroup()
    {
        if (isCreated)
        {
            QConfigStorage::EndGroup();
            QConfigStorage::Unlock();

            isCreated = false;
        }
    }
    ~QConfigStorageGroupCreator()
    {
        EndGroup();
    }
};

#endif /* QCONFIGSTORAGE_H_ */
