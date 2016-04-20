#ifndef TRAININGITEMLIST_H
#define TRAININGITEMLIST_H

#include <vector>
#include "trainingitem.h"

class TrainingItemList
{
public:
    TrainingItemList();
    int            GetItemsCount();
    TrainingItem * GetItem(int nIndex);
    double         GetItemValue(int nIndex);
    char *         GetItemName(int nIndex);
    int            SetItemValue(int nIndex, double Val);
    int            SetItemName(int nIndex, char * ValName);
    int            AddItem(TrainingItem * Item);
    int            DeleteItem(int nIndex);
    //Init();
    //Search();

private:
    int nItems;
    //TrainingItem * ItemsList;
    //vector<int> array1;
    std::vector<TrainingItem> ItemsList;
};

#endif // TRAININGITEMLIST_H
