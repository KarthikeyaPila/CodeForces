
#include <stdio.h>
// #include <assert.h>

typedef struct FleetInfo {
  int power;
  int salvage;
} FleetInfo;

void sort(FleetInfo* arr, int size) {
  for(int i=0; i<size; i++){
    for (int j=0; j<size-1; j++){
      if(arr[j+1].power < arr[j].power){
        FleetInfo temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main() {
  int power, fleets;
  scanf("%d", &power);
  scanf("%d", &fleets);

  FleetInfo fleetInfo[fleets];

  for(int i=0; i<fleets; i++){
    scanf("%d", &fleetInfo[i].power);
    scanf("%d", &fleetInfo[i].salvage);
  }

  sort(fleetInfo, fleets);

  int Winnable = 0;

  for(int i=0; i<fleets; i++){
    if(fleetInfo[i].power >= power){
      break;
    }
    power += fleetInfo[i].salvage;
    if(i == fleets-1){
      Winnable = 1;
    }
  }

  printf("%s", Winnable ? "YES": "NO");

  return 0;
}
