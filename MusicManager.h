//
// Created by Dor on 10/06/2020.
//
#include <ostream>
#include "hashTable.h"

#ifndef EX2_HASH_MUSICMANAGER_H
#define EX2_HASH_MUSICMANAGER_H


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

//class Artist


#endif //EX2_HASH_MUSICMANAGER_H
