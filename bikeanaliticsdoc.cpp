#include "bikeanaliticsdoc.h"

BikeAnaliticsDoc::BikeAnaliticsDoc()
{

}

// - Get functions ---------

// Get current user
BikeAnaliticsDoc::GetCurrentUser()
{
return AppUsers.GetCurrentUser();
}

// Get users count
int BikeAnaliticsDoc::GetUserCount()
{
    return AppUsers.GetUserCount();
}

// Get user by name
BikeAnaliticsDoc::GetUserByName(char * UserName)
{
    return AppUsers.GetUserByName(UserName);
}

// Get user by index
BikeAnaliticsDoc::GetUserByIndex(int nIndex)
{
    return AppUsers.GetUserByIndex(nIndex);
}

// Get trainings num
int BikeAnaliticsDoc::GetTrainingCount()
{
return AppTrainings.GetTrainingCount();
}

// Get training by index
TrainingData BikeAnaliticsDoc::GetTrainingByIndex(int nIndex)
{
return AppTrainings.GetTrainingByIndex(nIndex);
}

// Get training by name
TrainingData BikeAnaliticsDoc::GetTrainingByName(char * TrainingName)
{
return AppTrainings.GetTrainingByName(TrainingName);
}

// - Add functions ---------

// Add user
int BikeAnaliticsDoc::AddUser(char * UserName)
{
    AppUsers.AddUser(UserName);
return 1;
}

// Add training
int BikeAnaliticsDoc::AddTraining(char * TrainingName)
{
    AppTrainings.AddTraining(TrainingName);
return 1;
}

// - Delete functions ------

// Delete user
int BikeAnaliticsDoc::DeleteUser(char * UserName)
{
return 1;
}

// Delete training
int BikeAnaliticsDoc::DeleteTraining(char * TrainingName)
{
return 1;
}

// - Init functions --------

// Init user list
int BikeAnaliticsDoc::InitUserList()
{
return 1;
}
// Init training list
int BikeAnaliticsDoc::InitTrainingList()
{
return 1;
}
