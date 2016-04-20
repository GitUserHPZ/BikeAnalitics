#ifndef BIKEANALITICSDEFS
#define BIKEANALITICSDEFS


#define MAX_COMMENT_LENGHT 256

#define MAX_USER_COUNT 32
#define MAX_TRAININGS_COUNT 32
#define MAX_TRAINING_LENGHT 10000

class BikeAnaliticsTrainingSettings
{
public:
    char * name;
    long date;

    BikeAnaliticsTrainingSettings(){};
};

class BikeAnaliticsUserData
{
public:
    char * name;
    float height;
    float weight;
    float age;
    float condition;

    BikeAnaliticsUserData(){};
};

class StatisticsData
{
public:
    double uphill;
    double downhill;
    double minheight;
    double maxheight;
    double distance;
    long   duration;
    double temperature;
    double avgspeed;
    double maxspeed;
    double power;
    double avgpower;
    double maxpower;
    double avgcad;
    double maxcad;
    double cad;
    double pulse;
    double avgpulse;
    double maxpulse;
    double starttime;
    double endtime;

    StatisticsData(){};
};

class TrainingDataItem
{
public:    
    double  X;
    double  Y;
    double  height;
    double  distance;
    double  temperature;
    double  speed;
    double  cad;
    double  power;
    double  time;
    double  heart_rate;

    CurrentTrainingData(){};
};

class TrainingData
{
public:    
    long nItemCount;
    long nItems;
    char * TrainingName;
    long TrainingDate;

    TrainingDataItem * TrainingItems;
    StatisticsData TrainingStats;

    // Get training lenght
    long GetTrainingLenght();
    // Get training items count
    long GetTrainingItemsCount();


    // Get training by index
    GetTrainingByIndex();
    // Get training by name
    GetTrainingByName();
    // Add training
    int AddTraining();
    // Delete training
    int DeleteTraining();
    // Init training list
    int InitTrainingList();

    TrainingData(){};
};

class BikeAnaliticsUsers
{
public:

    // Users list
    BikeAnaliticsUserData * UserList;
    // Current user
    char * CurrentUser;
    // Users count
    int nUsersCount;

    // Get current user
    GetCurrentUser();
    // Get users count
    GetUserCount();
    // Get user by name
    GetUserByName();
    // Get user by index
    GetUserByIndex();
    // Add user
    AddUser();
    // Delete user
    DeleteUser();
    // Init user list
    InitUserList();

    BikeAnaliticsUsers(){};
};

class BikeAnaliticsTrainings
{
public:

    // Trainings list
    BikeAnaliticsTrainingSettings * TrainingList;
    // Current Training
    //char * CurrentTrainingName;
    TrainingData CurrentTraining;
    // Trainings count
    int nTrainingsCount;

    // Get current Training
    GetCurrentTraining();
    // Get Trainings count
    GetTrainingCount();
    // Get Training by name
    GetTrainingByName();
    // Get Training by index
    GetTrainingByIndex();
    // Add Training
    AddTraining();
    // Delete Training
    DeleteTraining();
    // Init Training list
    InitTrainingList();

    BikeAnaliticsTrainings(){};
};



#endif // BIKEANALITICSDEFS

