#include<stdio.h>

void temperatureConversion(int tempChoice);
void currencyConversion(int currencyChoice);
void massConversion(int massChoice);
void conversionRedirector(char category);
void function();

void main() {
    printf("Welcome to Unit Converter! \n");
    printf("Here is a list of conversions to choose from: \n");

    function();
}

void function(){
    char continueConversion = 'Y';
    while(continueConversion == 'Y' || continueConversion == 'y') {
        printf("\nTemperature(T), Currency(C), Mass(M) \n");
        printf("Please enter the letter of the category you want to convert.\n");
        char category;
        scanf(" %c", &category);
        conversionRedirector(category);

        printf("\nDo you want to perform another conversion? (Y/N): ");
        scanf(" %c", &continueConversion);
    }
    printf("Thank you for using the Unit Converter! Goodbye!\n");
}

void conversionRedirector(char category){
    int choice;
    if(category == 'T' || category == 't'){
        printf("Welcome to Temperature Converter! \n");
        printf("Here is a list of conversions to choose from: \n");
        printf("Enter 1 for Fahrenheit to Celsius. \n");
        printf("Enter 2 for Celsius to Fahrenheit. \n");
        scanf("%d", &choice);
        temperatureConversion(choice);
    } else if(category == 'C' || category == 'c') {
        printf("Welcome to Currency Converter! \n");
        printf("Here is a list of conversions to choose from: \n");
        printf("Enter 1 for USD to Euro. \n");
        printf("Enter 2 for USD to JPY. \n");
        printf("Enter 3 for USD to RMB. \n");
        printf("Enter 4 for USD to INR. \n");
        printf("Enter 5 for Euro to USD. \n");
        printf("Enter 6 for JPY to USD. \n");
        printf("Enter 7 for RMB to USD. \n");
        printf("Enter 8 for INR to USD. \n");
        scanf("%d", &choice);
        currencyConversion(choice);
    } else if(category == 'M' || category == 'm'){
        printf("Welcome to Mass Converter! \n");
        printf("Here is a list of conversions to choose from: \n");
        printf("Enter 1 for ounces to pounds. \n");
        printf("Enter 2 for grams to pounds. \n");
        printf("Enter 3 for pounds to ounces. \n");
        printf("Enter 4 for pounds to grams. \n");
        scanf("%d", &choice);
        massConversion(choice);
    } else {
        printf("Invalid category. Please enter T, C, or M. \n");
    }
}

void temperatureConversion(int tempChoice){
    float userinput;
    if(tempChoice == 1){
        printf("Please enter the Fahrenheit degree: \n");
        scanf("%f", &userinput);
        float fahrenheitToCelsius =  ((userinput - 32) * (5.0 / 9.0));
        printf("Celsius: %.2f\n", fahrenheitToCelsius);
    } else if(tempChoice == 2){
        printf("Please enter the Celsius degree: \n");
        scanf("%f", &userinput);
        float celsiusToFahrenheit = ((9.0 / 5.0) * userinput + 32);
        printf("Fahrenheit: %.2f\n", celsiusToFahrenheit);
    } else {
        printf("Please enter the correct choice. \n");
    }
}

void currencyConversion(int currencyChoice){
    float userinput;
    if(currencyChoice == 1){
        printf("Please enter the USD amount: \n");
        scanf("%f", &userinput);
        float USDtoEURO = userinput * 0.87;
        printf("Euro: %.2f\n", USDtoEURO);
    } else if(currencyChoice == 2){
        printf("Please enter the USD amount: \n");
        scanf("%f", &userinput);
        float USDtoJPY = userinput * 111.09;
        printf("JPY: %.2f\n", USDtoJPY);
    } else if(currencyChoice == 3) {
        printf("Please enter the USD amount: \n");
        scanf("%f", &userinput);
        float USDtoRMB = userinput * 6.82;
        printf("RMB: %.2f\n", USDtoRMB);
    } else if(currencyChoice == 4) {
        printf("Please enter the USD amount: \n");
        scanf("%f", &userinput);
        float USDtoINR = userinput * 80.98;
        printf("INR: %.2f\n", USDtoINR);
    } else if(currencyChoice == 5) {
        printf("Please enter the Euro amount: \n");
        scanf("%f", &userinput);
        float EUROtoUSD = userinput * 1.04;
        printf("USD: %.2f\n", EUROtoUSD);
    } else if(currencyChoice == 6) {
        printf("Please enter the JPY amount: \n");
        scanf("%f", &userinput);
        float JPYtoUSD = userinput * 0.0072;
        printf("USD: %.2f\n", JPYtoUSD);
    } else if(currencyChoice == 7) {
        printf("Please enter the RMB amount: \n");
        scanf("%f", &userinput);
        float RMBtoUSD = userinput * 0.14;
        printf("USD: %.2f\n", RMBtoUSD);
    } else if(currencyChoice == 8) {
        printf("Please enter the INR amount: \n");
        scanf("%f", &userinput);
        float INRtoUSD = userinput * 0.012;
        printf("USD: %.2f\n", INRtoUSD);
    } else {
        printf("Please enter the correct choice. \n");
    }
}

void massConversion(int massChoice){
    float userinput;
    if(massChoice == 1){
        printf("Please enter the ounce amount: \n");
        scanf("%f", &userinput);
        float ounceToPounds = userinput * 0.0625;
        printf("Pounds: %.2f\n", ounceToPounds);
    } else if(massChoice == 2) {
        printf("Please enter the gram amount: \n");
        scanf("%f", &userinput);
        float gramsToPounds = userinput * 0.00220462;
        printf("Pounds: %.2f\n", gramsToPounds);
    } else if(massChoice == 3) {
        printf("Please enter the pounds amount: \n");
        scanf("%f", &userinput);
        float poundsToOunce = userinput * 16;
        printf("Ounces: %.2f\n", poundsToOunce);
    } else if(massChoice == 4) {
        printf("Please enter the pounds amount: \n");
        scanf("%f", &userinput);
        float poundsToGrams = userinput * 453.592;
        printf("Grams: %.2f\n", poundsToGrams);
    } else {
        printf("Please enter the correct choice. \n");
    }
}
