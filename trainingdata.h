#ifndef TRAININGDATA_H
#define TRAININGDATA_H

#include "trainingitemlist.h"

class TrainingData
{
public:
    TrainingData();

    GetItem();
    AddItem();
    DeleteItem();

private:
    int nItems;
    TrainingItemList * ItemList;

};

#endif // TRAININGDATA_H
