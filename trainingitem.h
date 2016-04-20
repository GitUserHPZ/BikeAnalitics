#ifndef TRAININGITEM_H
#define TRAININGITEM_H

#include "bikeanaliticsdefs.h"

class TrainingItem
{
public:
    TrainingItem();
   ~TrainingItem();

    double GetValue();
    int    SetValue(double Value);
    char * GetName();
    int    SetName(char * ValName);

private:
    char * Name;
    double Value;
};

#endif // TRAININGITEM_H
