#include "middle_list.h"

string itc_rmstrchar(string str, string less) {
    string res = "";
    if(itc_len(str) > 0){
        for (long long i = 0; str[i] != '\0'; i++) {
        if (itc_slice_str(str, i, i + itc_len(less) - 1) != less)res += str[i];
        else i = i + itc_len(less) - 1;
    }
    }

    return res;

}
