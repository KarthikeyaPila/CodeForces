#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  char str[101];
  scanf("%s", str);

  int len = strlen(str);
  int first_lower = islower(str[0]);
  int all_caps=1;

  for(int i = 1; i < len; i++) {
    if(islower(str[i])) {
      all_caps = 0;
      break;
    }
  }

  if((all_caps && isupper(str[0])) || (first_lower && all_caps)){
    for(int i=0; i<len; i++){
      str[i] = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
    }
  }

  printf("%s\n", str);

  return 0;
}
