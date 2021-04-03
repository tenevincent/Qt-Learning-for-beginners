#include "singleton.h"



// Global static pointer used to ensure a single instance of the class.


/* Null, because instance will be initialized on demand. */
Singleton* Singleton::instance = 0;






Music* Singleton::getMusic()
{
    qDebug() << "album: " << m_music->album();
    qDebug() << "notes: " << m_music->notes();
    qDebug() << "artist: " << m_music->artist();

    return  this->m_music;
}
