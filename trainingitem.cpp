#include "string.h"
#include "trainingitem.h"

TrainingItem::TrainingItem()
{
    Name = new char[MAX_COMMENT_LENGHT];
}

TrainingItem::~TrainingItem()
{
    delete[] Name;
}

double TrainingItem::GetValue()
{
return Value;
}

int TrainingItem::SetValue(double Val)
{
    Value = Val;
return 1;
}

char * TrainingItem::GetName()
{
return Name;
}

int TrainingItem::SetName(char * ValName)
{
    strcpy(Name,ValName);
return 1;
}


