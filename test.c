#include <stdio.h>

#include "minunit.h"

int tests_run;
int subtests_run;

static char *test_bogo_init(){

        int t1, t2, t3;

        t1 = 1;
        t2 = 2;
        t3 = 3;

        mu_assert("Error setting t1.", t1 == 1);
        mu_assert("Error setting t2.", t2 == 2);
        mu_assert("Error setting t3.", t3 == 3);
        
        return(NULL);
}

static char *test_bogo1(){

        int t1, t2, t3;

        t1 = 1;
        t2 = 2;
        t3 = 3;

        mu_assert("Error t1 > t2", t1 < t2);
        mu_assert("Error t2 > t3", t2 < t3);
        
        return(NULL);
}

static char *test_bogo2(){

        int t1, t2, t3;

        t1 = 1;
        t2 = 2;
        t3 = 3;

        mu_assert("Error t3 < t2", t3 > t2);
        mu_assert("Error t2 < t1", t2 > t1);
        
        return(NULL);
}

static char *test_bogo_teardown(){

        int t1, t2, t3;

        t1 = 1;
        t2 = 2;
        t3 = 3;

        mu_assert("Error t1 didn't hold it's value.", t1 == 1);
        mu_assert("Error t2 didn't hold it's value.", t2 == 2);
        mu_assert("Error t3 didn't hold it's value.", t3 == 3);
        
        return(NULL);
}


static char *all_testing(){
        mu_run_test(test_bogo_init);
        mu_run_test(test_bogo1);
        mu_run_test(test_bogo2);
        mu_run_test(test_bogo_teardown);

        return(NULL);
}

int main(int argc, char **argv){
        char *result = all_testing();
        if(result != NULL)
                printf("%s\n", result);
        else
                printf("\nAll tests PASSED.\n");

        printf("Tests run: %d\n\tSubtests:%d\n", tests_run, subtests_run);
        return(result != NULL);
}
