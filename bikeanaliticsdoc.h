#ifndef BIKEANALITICSDOC_H
#define BIKEANALITICSDOC_H

#include "bikeanaliticsdefs.h"

class BikeAnaliticsDoc
{

public:
    BikeAnaliticsDoc();


    // - Get functions ---------

    // Get current user
    GetCurrentUser(); // ! return
    // Get users count
    int GetUserCount();
    // Get user by name
    GetUserByName(char * UserName); // ! return
    // Get user by index
    GetUserByIndex(int nIndex); // ! return

    // Get trainings num
    int GetTrainingCount();
    // Get training by index
    TrainingData GetTrainingByIndex(int nIndex);
    // Get training by name
    TrainingData GetTrainingByName(char * TrainingName); // ! args

    // - Add functions ---------

    // Add user
    int AddUser(char * UserName);
    // Add training
    int AddTraining(char * TrainingName);

    // - Delete functions ------

    // Delete user
    int DeleteUser(char * UserName);
    // Delete training
    int DeleteTraining(char * TrainingName);

    // - Init functions --------

    // Init user list
    int InitUserList();
    // Init training list
    int InitTrainingList();

private:
    // Work area

    BikeAnaliticsUsers AppUsers;
    // Users num
    // Trainings list
    BikeAnaliticsTrainings AppTrainings;
    // Current training
    TrainingData CurrentTraining;

};

#endif // BIKEANALITICSDOC_H
