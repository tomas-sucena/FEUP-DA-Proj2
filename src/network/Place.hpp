#ifndef DA_PROJ2_PLACE_HPP
#define DA_PROJ2_PLACE_HPP

#include "../external/graph/src/implementation/Vertex.hpp"


class Place : public Vertex {
    private:
        double latitude;
        double longitude;

    public:
        /**
         * @brief creates a new Place
         * @param latitude latitude of the Place
         * @param longitude longitude of the Place
        */
        Place(double latitude, double longitude) : latitude(latitude), longitude(longitude) {}

        /**
         * @brief creates a copy of the Station
         * @return pointer to a copy of the Station
         */
        Vertex* clone() const override{
            return new Place(*this);
        }

        double getLatitude() const{
            return this->latitude;
        }

        double getLongitude() const{
            return this->longitude;
        }


};


#endif //DA_PROJ2_PLACE_HPP

