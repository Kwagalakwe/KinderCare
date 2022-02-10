void doAssignment(char *characters, int assID){
//void doAssignment(char *characters, int assID, char *UserCode){
float average;
float score1;
float score;
float score2 = 0.0;
int x,m,n;


//LOOP THROUGH CHARACTERS TO ATTEMPT.....

for(x=0; x<strlen(characters); x++){
        printf("\n Hello %s YOU ARE ATTEMPTING LETTER %c.......\n", UserCode, characters[x]);

switch(characters[x]){

   case 'A':{
   float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    A();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }
//B
case 'B':{
    score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    B();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }

                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n",score1 );
        break;

    }

    case 'C':{
        score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    C();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n",score1);
        break;

    }


//LETTER D
case 'D':{
    float score = 0.0;

            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    D();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }
//LETTER E
case 'E':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    E();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }

//LETTER F
case 'F':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    F();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER G
case 'G':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    G();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER H
case 'H':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    H();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER I
case 'I':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    I();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER J
case 'J':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    J();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER K
case 'K':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    K();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER L
case 'L':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    L();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER M
case 'M':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    M();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER N
case 'N':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    N();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER O
case 'O':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    O();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER P
case 'P':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    P();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER Q
case 'Q':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    Q();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER R
case 'R':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    R();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER S
case 'S':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    S();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER T
case 'T':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    T();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER U
case 'U':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    U();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER V
case 'V':{
float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    V();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER W
case 'W':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    W();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER X
case 'X':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    X();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER Y
case 'Y':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    Y();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }


//LETTER Z
case 'Z':{
    float score = 0.0;
            Attempt_Assignment();
            fflush(stdin);

            //PRINTING THE MARKING GUIDE....
                    printf("\nTHE MARKING GUIDE....\n");
                    Z();
                    printf("\n");

            //FOR COMPARISON OF PATTERNS AND AWARDING SCORES...
                    for(m=0; m<5; m++){


                        for(n=0; n<5; n++){

                           if(Real[m][n]==Zero[m][n]){
                            score += 1.0;
                           }else{
                           score+=0.0;
                           }

                        }

                    }
                    score1=(score/25)*100;
                    score2 += score1;
                printf("\n\tTOTAL SCORE = %.2f %%\n", score1);
        break;

    }



}


}

     average=score2/strlen(characters);
     printf("\nAVERAGE SCORE= %.2f %%\n",average);
    //sum is the total time taken to attempt all characters in an assignment.
     printf("\n\t TOTAL TIME TAKEN TO FINISH ATTEMPTING ASSIGNMENTS = %.3f seconds\n",sum);

        char sumzy[20];//string variable for sum
        char avg[20];//string variable for average

        //COnverting the float values of sum and average to a string
        sprintf(sumzy, "%f", sum);
        sprintf(avg, "%f", average);

     //FUNCTION FOR INSERTING THE SCORE, USERCODE, ASSIGNMENT-ID AND THE DURATION INTO THE DATABASE
    void postResults(char *sumzy, char *avg){
    char querry[400];
    //char *UserCode = User_Code;
     strcpy(querry,"INSERT INTO scores (AssignmentID, user_code, duration, scores) values (\'");
     strcat(querry,assID);
     strcat(querry, "\', \'");
     strcat(querry, UserCode);
     strcat(querry, "\', \'");
     strcat(querry, sumzy);
     strcat(querry, "\', \'");
     strcat(querry, avg);
     strcat(querry, "\')");


        if(mysql_query(conn, querry)){
            printf("\nSorry....your scores could not be sent to the database\n");
            exit(1);
        }else{
        printf("\n Congratulations %s %s!!! You have attempted the assignment......", firstName, lastName);
        }
    }


    postResults(sumzy, avg);

    viewCommands();

}
