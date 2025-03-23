#include <stdio.h>
// #include <assert.h>

void sort(int* arr, int size) {
  for(int i=0; i<size; i++){
    for (int j=0; j<size-1; j++){
      if(arr[j+1] < arr[j]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main() {
  int inputs[4] = {1, 2, 3, 4};

  for(int i=0; i<4; i++){
    scanf("%d", &inputs[i]);
  }

  sort(inputs, 4);

  printf("%d", (inputs[0]*inputs[1])+(inputs[2]*inputs[3]));

  // for(int i=0; i<4; i++){
  //   printf("%d\n", inputs[i]);
  // }

  return 0;
}
