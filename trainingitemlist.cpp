#include "trainingitemlist.h"

TrainingItemList::TrainingItemList()
{

}

int TrainingItemList::GetItemsCount()
{
return nItems;
}

TrainingItem *  TrainingItemList::GetItem(int nIndex)
{
    std::vector<TrainingItem>::iterator itTrainingItem;
    if(ItemsList.size() > nIndex)
    {
        itTrainingItem = ItemsList.begin()+nIndex;
        return &(*itTrainingItem);
    }
//return ItemsList[nIndex];
//return nullptr;
}

double TrainingItemList::GetItemValue(int nIndex)
{

    std::vector<TrainingItem>::iterator itTrainingItem;
    if(ItemsList.size() > nIndex)
    {
        itTrainingItem = ItemsList.begin()+nIndex;
        return itTrainingItem->GetValue();
    }
//return ItemsList[nIndex].GetValue();
}

char * TrainingItemList::GetItemName(int nIndex)
{
    std::vector<TrainingItem>::iterator itTrainingItem;
    if(ItemsList.size() > nIndex)
    {
        itTrainingItem = ItemsList.begin()+nIndex;
        return itTrainingItem->GetName();
    }
//return ItemsList[nIndex].GetName();
}

int TrainingItemList::SetItemValue(int nIndex, double Val)
{
//    ItemsList[nIndex].SetValue(Val);
    std::vector<TrainingItem>::iterator itTrainingItem;
    if(ItemsList.size() > nIndex)
    {
        itTrainingItem = ItemsList.begin()+nIndex;
        itTrainingItem->SetValue(Val);
    }
return 1;
}

int TrainingItemList::SetItemName(int nIndex, char * ValName)
{
//    ItemsList[nIndex].SetName(ValName);
    std::vector<TrainingItem>::iterator itTrainingItem;
    if(ItemsList.size() > nIndex)
    {
        itTrainingItem = ItemsList.begin()+nIndex;
        itTrainingItem->SetName(ValName);
    }
return 1;
}

int TrainingItemList::AddItem(TrainingItem * Item)
{
    ItemsList.push_back(*Item);
    nItems++;

return 1;
}

int TrainingItemList::DeleteItem(int nIndex)
{
    if(ItemsList.size() > nIndex)
    {
        ItemsList.erase(ItemsList.begin()+nIndex);
    }
return 1;
}

