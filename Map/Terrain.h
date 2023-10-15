#pragma once

class Terrain
{
    public:
        Terrain(){}

    public:
        virtual int GetResourceLeft() = 0;

    private: 
        int left;
};