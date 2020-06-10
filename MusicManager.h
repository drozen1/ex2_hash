//
// Created by Dor on 10/06/2020.
//
#include <ostream>
#include "hashTable.h"

#ifndef EX2_HASH_MUSICMANAGER_H
#define EX2_HASH_MUSICMANAGER_H


/**
 *      ERRRRRRORRRRRRRR
 *
 * before inserting into the streams tree check there isnt already a node with the given id.
 *
 *
 */



    using namespace AVLUtils;

    class ArtistRegularTreeInfo {
    public:
        ArtistRegularTreeInfo(int songId) : songId(songId) {}

        virtual ~ArtistRegularTreeInfo() {

        }
        int getSongId() const {
            return songId;
        }

        void setSongId(int songId) {
            ArtistRegularTreeInfo::songId = songId;
        }

        ArtistRegularTreeInfo& operator=(const ArtistRegularTreeInfo& rhs);

        bool operator==(const ArtistRegularTreeInfo &rhs) const {
            return songId == rhs.songId;
        }

        bool operator!=(const ArtistRegularTreeInfo &rhs) const {
            return !(rhs == *this);
        }

        bool operator<(const ArtistRegularTreeInfo &rhs) const {
            return songId < rhs.songId;
        }

        bool operator>(const ArtistRegularTreeInfo &rhs) const {
            return rhs < *this;
        }

        bool operator<=(const ArtistRegularTreeInfo &rhs) const {
            return !(rhs < *this);
        }

        bool operator>=(const ArtistRegularTreeInfo &rhs) const {
            return !(*this < rhs);
        }
        friend std::ostream &operator<<(std::ostream &os, const ArtistRegularTreeInfo &info) {
            os << "songId: " << info.songId;
            return os;
        }

    private:
        int songId;
    };

ArtistRegularTreeInfo &ArtistRegularTreeInfo::operator=(const ArtistRegularTreeInfo &rhs) {
    this->songId=rhs.getSongId();
    return *this;
}

class ArtistStreamTreeInfo{
public:
    ArtistStreamTreeInfo(int songId) : numOfStreams(0), songId(songId) {}

    int getNumOfStreams() const {
        return numOfStreams;
    }

    bool operator==(const ArtistStreamTreeInfo &rhs) const {
        return songId == rhs.songId;
    }

    bool operator<(const ArtistStreamTreeInfo &rhs) const {
        if(numOfStreams==rhs.numOfStreams){
            return this->songId < rhs.songId;
        }
        return numOfStreams < rhs.numOfStreams;
    }

    friend std::ostream &operator<<(std::ostream &os, const ArtistStreamTreeInfo &info) {
        os << "numOfStreams: " << info.numOfStreams << " songId: " << info.songId;
        return os;
    }

    bool operator>(const ArtistStreamTreeInfo &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const ArtistStreamTreeInfo &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const ArtistStreamTreeInfo &rhs) const {
        return !(*this < rhs);
    }

    bool operator!=(const ArtistStreamTreeInfo &rhs) const {
        return !(rhs == *this);
    }

    void setNumOfStreams(int numOfStreams) {
        ArtistStreamTreeInfo::numOfStreams = numOfStreams;
    }

    int getSongId() const {
        return songId;
    }

    void setSongId(int songId) {
        ArtistStreamTreeInfo::songId = songId;
    }

    void incrementNumberOfStreams(int count){
        this->setNumOfStreams(numOfStreams + count);
    }

private:
    int numOfStreams;
    int songId;
};



#endif //EX2_HASH_MUSICMANAGER_H
