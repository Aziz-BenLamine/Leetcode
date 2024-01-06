


typedef struct {
    int big;
    int medium;
    int small;
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem* obj = (ParkingSystem*)malloc(sizeof(ParkingSystem));
    obj->big = big;
    obj->medium = medium;
    obj->small = small;
    
    return obj;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    if(carType == 1 && obj->big != 0){
        obj->big = (obj->big) - 1;
        return true;
    }
    else if(carType == 2 && obj->medium != 0){
        obj->medium = (obj->medium) - 1;
        return true;   
    }
    else if(carType == 3 && obj->small != 0){
        obj->small = (obj->small) - 1;
        return true;
    }
    return false;
}

void parkingSystemFree(ParkingSystem* obj) {
    
}

/**
 * Your ParkingSystem struct will be instantiated and called as such:
 * ParkingSystem* obj = parkingSystemCreate(big, medium, small);
 * bool param_1 = parkingSystemAddCar(obj, carType);
 
 * parkingSystemFree(obj);
*/