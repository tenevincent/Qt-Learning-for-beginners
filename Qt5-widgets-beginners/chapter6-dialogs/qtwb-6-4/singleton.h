#ifndef SINGLETON_H
#define SINGLETON_H


#include "music.h"

#include <iostream>
#include <QDebug>



class Singleton
{
private:
    Music *m_music = new Music();


public:
    Music* getMusic();


private:
    /* Here will be the instance stored. */
    static Singleton* instance;

    /* Private constructor to prevent instancing. */
    Singleton()
    {}

    Singleton& operator=(Singleton const&) = delete;

public:
    /* Static access method. */
    static  Singleton* getInstance()
    {
        qDebug() << "is instance null: " << (instance == nullptr);
        if (instance == 0)
        {

            instance = new Singleton();
            instance->getMusic()->setAlbum("Vincent Tene");
        }

        return instance;
    }
};









#endif // SINGLETON_H
