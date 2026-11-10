#include <stdio.h>
#include <string.h>

#define GROUP_COUNT 8
#define LOW_STOCK_THRESHOLD 5

char bloodGroups[8][4] = {"A+", "A-", "B+", "B-", "AB+", "AB-", "O+", "O-"};
int stock[8] = {12, 7, 10, 4, 8, 3, 15, 6};

/* Return 1 when an integer was read, otherwise clear the bad input line. */
int readInteger(int *number)
{
    int ch;

    if (scanf("%d", number) != 1)
    {
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
            /* Discard the rest of the invalid line. */
        }
        return 0;
    }

    /* Remove any extra characters after the number on the same line. */
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        /* Discard the rest of the input line. */
    }
    return 1;
}

/* Print every blood group and its current simulated units. */
void displayStock(void)
{
    int i;

    printf("\n--- Current Blood Stock ---\n");
    for (i = 0; i < GROUP_COUNT; i++)
    {
        printf("%-3s : %d units", bloodGroups[i], stock[i]);
        if (stock[i] < LOW_STOCK_THRESHOLD)
        {
            printf("  ** LOW STOCK **");
        }
        printf("\n");
    }
}

/* Read a label and return its position in bloodGroups, or -1 if invalid. */
int findBloodGroup(void)
{
    char enteredGroup[4];
    int i;

    printf("Enter blood group (A+, A-, B+, B-, AB+, AB-, O+, O-): ");
    if (scanf("%3s", enteredGroup) != 1)
    {
        return -1;
    }

    /* Consume the rest of the line so extra input cannot affect later reads. */
    {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
            /* Continue to the end of the input line. */
        }
    }

    for (i = 0; i < GROUP_COUNT; i++)
    {
        if (strcmp(enteredGroup, bloodGroups[i]) == 0)
        {
            return i;
        }
    }


    return -1;
}

void recordDonation(void)
{
    int groupIndex;
    int quantity;

    groupIndex = findBloodGroup();
    if (groupIndex == -1)
    {
        printf("Invalid blood group. Stock was not changed.\n");
        return;
    }

    printf("Enter number of units donated: ");
    if (!readInteger(&quantity) || quantity <= 0)
    {
        printf("Quantity must be a positive whole number. Stock was not changed.\n");
        return;
    }

    stock[groupIndex] += quantity;
    printf("Donation recorded. %s stock is now %d units.\n",
           bloodGroups[groupIndex], stock[groupIndex]);
}

void issueBlood(void)
{
    int groupIndex;
    int quantity;

    groupIndex = findBloodGroup();
    if (groupIndex == -1)
    {
        printf("Invalid blood group. Stock was not changed.\n");
        return;
    }

    printf("Enter number of units to issue: ");
    if (!readInteger(&quantity) || quantity <= 0)
    {
        printf("Quantity must be a positive whole number. Stock was not changed.\n");
        return;
    }

    if (quantity > stock[groupIndex])
    {
        printf("Not enough %s stock. Available: %d units. Stock was not changed.\n",
               bloodGroups[groupIndex], stock[groupIndex]);
        return;
    }

    stock[groupIndex] -= quantity;
    printf("Issue recorded. %s stock is now %d units.\n",
           bloodGroups[groupIndex], stock[groupIndex]);
}

void stockManagement(void)
{
    int choice;

    do
    {
        printf("\n=== Blood Bank Stock Management ===\n");
        printf("1. Display stock\n");
        printf("2. Record donation\n");
        printf("3. Issue blood units\n");
        printf("4. Exit\n");
        printf("Choose an option: ");

        if (!readInteger(&choice))
        {
            printf("Please enter a menu number from 1 to 4.\n");
            continue;
        }

        switch (choice)
        {
            case 1:
                displayStock();
                break;
            case 2:
                recordDonation();
                break;
            case 3:
                issueBlood();
                break;
            case 4:
                printf("Exiting stock management.\n");
                break;
            default:
                printf("Invalid menu option. Choose 1, 2, 3, or 4.\n");
        }
    } while (choice != 4);
}


/* Donor records */
int donorID[100], age[100];
char name[100][50], contact_no[100][13], blood_group[100][4];
int registeredDonors = 0;

/* Return 1 when every character in the text is a digit. */
int allDigits(const char *text)
{
    while (*text != '\0')
    {
        if (*text < '0' || *text > '9')
        {
            return 0;
        }
        text++;
    }
    return 1;
}

void registerDonors(void)
{
    int ch;
    int duplicate = 0;
    int i;
    int j;

    printf("How many donors do you want to register?\n");
    if (!readInteger(&registeredDonors) ||
        registeredDonors < 1 || registeredDonors > 100)
    {
        printf("Invalid number of donors!");
        registeredDonors = 0;
        return;
    }

    for (i = 0; i < registeredDonors; i++)
    {
        printf("\n\t\t\t\t\tENTER CREDENTIALS FOR REGISTRATION:\n");

        do
        {
            duplicate = 0;

            printf("Enter donor ID:\n");
            if (!readInteger(&donorID[i]))
            {
                duplicate = 1;
                printf("Invalid ID! Please enter a number.\n");
                continue;
            }

            for (j = 0; j < i; j++)
            {
                if (donorID[i] == donorID[j])
                {
                    duplicate = 1;
                    printf("This donor ID already exists! Enter another ID.\n");
                    break;
                }
            }

        } while (duplicate == 1);

        printf("Enter donor's name:\n");
        scanf(" %49[^\n]", name[i]);

        do
        {
            printf("Enter donor's age:\n");
            if (!readInteger(&age[i]))
            {
                age[i] = 0;
            }

            if (age[i] < 1 || age[i] > 120)
            {
                printf("Invalid age! Please enter a valid age.\n");
            }

        } while (age[i] < 1 || age[i] > 120);

        do
        {
            printf("Enter donor's contact number:\n");
            scanf("%12s", contact_no[i]);
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                /* Discard the rest of the line. */
            }

            if (strlen(contact_no[i]) != 11 ||
                !allDigits(contact_no[i]) ||
                contact_no[i][0] != '0' ||
                contact_no[i][1] != '3')
            {
                printf("Invalid contact number! Enter an 11-digit Pakistani mobile number.\n");
            }

        } while (strlen(contact_no[i]) != 11 ||
                 !allDigits(contact_no[i]) ||
                 contact_no[i][0] != '0' ||
                 contact_no[i][1] != '3');

        do
        {
            printf("Enter donor's blood group:\n");
            scanf("%3s", blood_group[i]);

            if (strcmp(blood_group[i], "A+") != 0 &&
                strcmp(blood_group[i], "A-") != 0 &&
                strcmp(blood_group[i], "B+") != 0 &&
                strcmp(blood_group[i], "B-") != 0 &&
                strcmp(blood_group[i], "AB+") != 0 &&
                strcmp(blood_group[i], "AB-") != 0 &&
                strcmp(blood_group[i], "O+") != 0 &&
                strcmp(blood_group[i], "O-") != 0)
            {
                printf("Invalid blood group! Please enter a valid blood group.\n");
            }

        } while (strcmp(blood_group[i], "A+") != 0 &&
                 strcmp(blood_group[i], "A-") != 0 &&
                 strcmp(blood_group[i], "B+") != 0 &&
                 strcmp(blood_group[i], "B-") != 0 &&
                 strcmp(blood_group[i], "AB+") != 0 &&
                 strcmp(blood_group[i], "AB-") != 0 &&
                 strcmp(blood_group[i], "O+") != 0 &&
                 strcmp(blood_group[i], "O-") != 0);

        printf("\n\t\t\t\t\tDONOR REGISTRATION SUCCESSFUL!\n");

        printf("Donor ID: %d\n", donorID[i]);
        printf("Name: %s\n", name[i]);
        printf("Age: %d\n", age[i]);
        printf("Contact Number: %s\n", contact_no[i]);
        printf("Blood Group: %s\n", blood_group[i]);
    }
}

void searchDonors(void)
{
    int choice = 0, found, k;
    char searchName[50];
    char searchBloodGroup[4];

    printf("\n\t\t\t\t\tDONOR MANAGEMENT MENU\n");
    printf("1. Search donor by name\n");
    printf("2. Search donor by blood group\n");
    printf("3. Display all donor records\n");
    printf("Enter your choice: ");
    readInteger(&choice);

    switch (choice)
    {
        case 1:
            found = 0;

            printf("Enter donor's name to search:\n");
            scanf(" %49[^\n]", searchName);

            for (k = 0; k < registeredDonors; k++)
            {
                if (strcmp(name[k], searchName) == 0)
                {
                    found = 1;

                    printf("\nDonor found!\n");
                    printf("Donor ID: %d\n", donorID[k]);
                    printf("Name: %s\n", name[k]);
                    printf("Age: %d\n", age[k]);
                    printf("Contact: %s\n", contact_no[k]);
                    printf("Blood Group: %s\n", blood_group[k]);
                }
            }

            if (found == 0)
            {
                printf("Donor not found!\n");
            }

            break;

        case 2:
            found = 0;

            printf("Enter blood group to search:\n");
            scanf("%3s", searchBloodGroup);

            for (k = 0; k < registeredDonors; k++)
            {
                if (strcmp(blood_group[k], searchBloodGroup) == 0)
                {
                    found = 1;

                    printf("\nDonor found!\n");
                    printf("Donor ID: %d\n", donorID[k]);
                    printf("Name: %s\n", name[k]);
                    printf("Age: %d\n", age[k]);
                    printf("Contact: %s\n", contact_no[k]);
                    printf("Blood Group: %s\n", blood_group[k]);
                }
            }

            if (found == 0)
            {
                printf("No donors found with this blood group!\n");
            }

            break;

        case 3:
            printf("\n\t\t\t\t\t\tALL REGISTERED DONORS\n");

            for (k = 0; k < registeredDonors; k++)
            {
                printf("\nDonor Number: %d\n", k + 1);
                printf("Donor ID: %d\n", donorID[k]);
                printf("Name: %s\n", name[k]);
                printf("Age: %d\n", age[k]);
                printf("Contact Number: %s\n", contact_no[k]);
                printf("Blood Group: %s\n", blood_group[k]);

                printf("-----------------------------------\n");
            }

            break;

        default:
            printf("Invalid choice!\n");
    }
}



/* Uses the shared stock[] array. Index order:
   0 = A+, 1 = A-, 2 = B+, 3 = B-, 4 = AB+, 5 = AB-, 6 = O+, 7 = O- */
void emergencyBloodRequest(void)
{
    int bgd = 0;
    int requnits = 0;
    int dchoice = 0;

    printf("\n\t\t\tEmergency Blood Request\t\t\t");
    printf("\nBlood Group donation table");
    printf("\nBlood Group | Give                 | Receive");
    printf("\n------------------------------------------------------------------------------");
    printf("\n O-         | ALL                  | O-");
    printf("\n O+         | O+, A+, B+, AB+      | O+, O-");
    printf("\n A-         | A-, A+, AB-, AB+     | A-, O-");
    printf("\n A+         | A+, AB+              | A+, A-, O+, O-");
    printf("\n B-         | B-,B+, AB-, AB+      | B-, O-");
    printf("\n B+         | B+, AB+              | B+, B-, O+, O-");
    printf("\n AB-        | AB-, AB+             | AB-, A-, B-, O-");
    printf("\n AB+        | AB+                  | ALL");
    printf("\nPlease enter the blood group number you need donation for\n");
    printf("1. A+\n");
    printf("2. A-\n");
    printf("3. B+\n");
    printf("4. B-\n");
    printf("5. AB+\n");
    printf("6. AB-\n");
    printf("7. O+\n");
    printf("8. O-\n");
    readInteger(&bgd);
    switch (bgd)
    {
        case 1:
            printf("\nCompatible donor blood groups available");
            printf("\n1. A+\t\tCurrent Stock= %d units available", stock[0]);
            printf("\n2. A-\t\tCurrent Stock= %d units available", stock[1]);
            printf("\n3. O+\t\tCurrent Stock= %d units available", stock[6]);
            printf("\n4. O-\t\tCurrent Stock= %d units available", stock[7]);
            printf("\nSelect the donor blood group to use (1-4)");
            readInteger(&dchoice);
            printf("\nEnter no of units required");
            readInteger(&requnits);
            if (requnits <= 0)
            {
                printf("\nInvalid entry - no fake requests are entertained");
                break;
            }
            switch (dchoice)
            {
                case 1:
                    if (stock[0] >= requnits)
                    {
                        stock[0] -= requnits;
                        printf("\nA positive stock left= %d", stock[0]);
                    }
                    else
                    {
                        printf("\nInsufficient A+ stock");
                    }
                    break;
                case 2:
                    if (stock[1] >= requnits)
                    {
                        stock[1] -= requnits;
                        printf("\nA negative stock left= %d", stock[1]);
                    }
                    else
                    {
                        printf("\nInsufficient A- stock");
                    }
                    break;
                case 3:
                    if (stock[6] >= requnits)
                    {
                        stock[6] -= requnits;
                        printf("\nO positive stock left= %d", stock[6]);
                    }
                    else
                    {
                        printf("\nInsufficient O+ stock");
                    }
                    break;
                case 4:
                    if (stock[7] >= requnits)
                    {
                        stock[7] -= requnits;
                        printf("\nO negative stock left= %d", stock[7]);
                    }
                    else
                    {
                        printf("\nInsufficient O- stock");
                    }
                    break;
                default:
                    printf("\nInvalid donor blood group selection");
                    break;
            }
            break;
        case 2:
            printf("\nCompatible donor blood groups available");
            printf("\n1. A-\t\tCurrent Stock= %d units available", stock[1]);
            printf("\n2. O-\t\tCurrent Stock= %d units available", stock[7]);
            printf("\nSelect the donor blood group to use (1-2)");
            readInteger(&dchoice);
            printf("\nEnter no of units required");
            readInteger(&requnits);
            if (requnits <= 0)
            {
                printf("\nInvalid entry - no fake requests are entertained");
                break;
            }
            switch (dchoice)
            {
                case 1:
                    if (stock[1] >= requnits)
                    {
                        stock[1] -= requnits;
                        printf("\nA negative stock left= %d", stock[1]);
                    }
                    else
                    {
                        printf("\nInsufficient A- stock");
                    }
                    break;
                case 2:
                    if (stock[7] >= requnits)
                    {
                        stock[7] -= requnits;
                        printf("\nO negative stock left= %d", stock[7]);
                    }
                    else
                    {
                        printf("\nInsufficient O- stock");
                    }
                    break;
                default:
                    printf("\nInvalid donor blood group selection");
                    break;
            }
            break;
        case 3:
            printf("\nCompatible donor blood groups available");
            printf("\n1. B+\t\tCurrent Stock= %d units available", stock[2]);
            printf("\n2. B-\t\tCurrent Stock= %d units available", stock[3]);
            printf("\n3. O+\t\tCurrent Stock= %d units available", stock[6]);
            printf("\n4. O-\t\tCurrent Stock= %d units available", stock[7]);
            printf("\nSelect the donor blood group to use (1-4)");
            readInteger(&dchoice);
            printf("\nEnter no of units required");
            readInteger(&requnits);
            if (requnits <= 0)
            {
                printf("\nInvalid entry - no fake requests are entertained");
                break;
            }
            switch (dchoice)
            {
                case 1:
                    if (stock[2] >= requnits)
                    {
                        stock[2] -= requnits;
                        printf("\nB positive stock left= %d", stock[2]);
                    }
                    else
                    {
                        printf("\nInsufficient B+ stock");
                    }
                    break;
                case 2:
                    if (stock[3] >= requnits)
                    {
                        stock[3] -= requnits;
                        printf("\nB negative stock left= %d", stock[3]);
                    }
                    else
                    {
                        printf("\nInsufficient B- stock");
                    }
                    break;
                case 3:
                    if (stock[6] >= requnits)
                    {
                        stock[6] -= requnits;
                        printf("\nO positive stock left= %d", stock[6]);
                    }
                    else
                    {
                        printf("\nInsufficient O+ stock");
                    }
                    break;
                case 4:
                    if (stock[7] >= requnits)
                    {
                        stock[7] -= requnits;
                        printf("\nO negative stock left= %d", stock[7]);
                    }
                    else
                    {
                        printf("\nInsufficient O- stock");
                    }
                    break;
                default:
                    printf("\nInvalid donor blood group selection");
                    break;
            }
            break;
        case 4:
            printf("\nCompatible donor blood groups available");
            printf("\n1. B-\t\tCurrent Stock= %d units available", stock[3]);
            printf("\n2. O-\t\tCurrent Stock= %d units available", stock[7]);
            printf("\nSelect the donor blood group to use (1-2)");
            readInteger(&dchoice);
            printf("\nEnter no of units required");
            readInteger(&requnits);
            if (requnits <= 0)
            {
                printf("\nInvalid entry - no fake requests are entertained");
                break;
            }
            switch (dchoice)
            {
                case 1:
                    if (stock[3] >= requnits)
                    {
                        stock[3] -= requnits;
                        printf("\nB negative stock left= %d", stock[3]);
                    }
                    else
                    {
                        printf("\nInsufficient B- stock");
                    }
                    break;
                case 2:
                    if (stock[7] >= requnits)
                    {
                        stock[7] -= requnits;
                        printf("\nO negative stock left= %d", stock[7]);
                    }
                    else
                    {
                        printf("\nInsufficient O- stock");
                    }
                    break;
                default:
                    printf("\nInvalid donor blood group selection");
                    break;
            }
            break;
        case 5:
            printf("\nCompatible donor blood groups available");
            printf("\n1. A+\t\tCurrent Stock= %d units available", stock[0]);
            printf("\n2. A-\t\tCurrent Stock= %d units available", stock[1]);
            printf("\n3. O+\t\tCurrent Stock= %d units available", stock[6]);
            printf("\n4. O-\t\tCurrent Stock= %d units available", stock[7]);
            printf("\n5. B+\t\tCurrent Stock= %d units available", stock[2]);
            printf("\n6. B-\t\tCurrent Stock= %d units available", stock[3]);
            printf("\n7. AB+\t\tCurrent Stock= %d units available", stock[4]);
            printf("\n8. AB-\t\tCurrent Stock= %d units available", stock[5]);
            printf("\nSelect the donor blood group to use (1-8)");
            readInteger(&dchoice);
            printf("\nEnter no of units required");
            readInteger(&requnits);
            if (requnits <= 0)
            {
                printf("\nInvalid entry - no fake requests are entertained");
                break;
            }
            switch (dchoice)
            {
                case 1:
                    if (stock[0] >= requnits)
                    {
                        stock[0] -= requnits;
                        printf("\nA positive stock left= %d", stock[0]);
                    }
                    else
                    {
                        printf("\nInsufficient A+ stock");
                    }
                    break;
                case 2:
                    if (stock[1] >= requnits)
                    {
                        stock[1] -= requnits;
                        printf("\nA negative stock left= %d", stock[1]);
                    }
                    else
                    {
                        printf("\nInsufficient A- stock");
                    }
                    break;
                case 3:
                    if (stock[6] >= requnits)
                    {
                        stock[6] -= requnits;
                        printf("\nO positive stock left= %d", stock[6]);
                    }
                    else
                    {
                        printf("\nInsufficient O+ stock");
                    }
                    break;
                case 4:
                    if (stock[7] >= requnits)
                    {
                        stock[7] -= requnits;
                        printf("\nO negative stock left= %d", stock[7]);
                    }
                    else
                    {
                        printf("\nInsufficient O- stock");
                    }
                    break;
                case 5:
                    if (stock[2] >= requnits)
                    {
                        stock[2] -= requnits;
                        printf("\nB positive stock left= %d", stock[2]);
                    }
                    else
                    {
                        printf("\nInsufficient B+ stock");
                    }
                    break;
                case 6:
                    if (stock[3] >= requnits)
                    {
                        stock[3] -= requnits;
                        printf("\nB negative stock left= %d", stock[3]);
                    }
                    else
                    {
                        printf("\nInsufficient B- stock");
                    }
                    break;
                case 7:
                    if (stock[4] >= requnits)
                    {
                        stock[4] -= requnits;
                        printf("\nAB positive stock left= %d", stock[4]);
                    }
                    else
                    {
                        printf("\nInsufficient AB+ stock");
                    }
                    break;
                case 8:
                    if (stock[5] >= requnits)
                    {
                        stock[5] -= requnits;
                        printf("\nAB negative stock left= %d", stock[5]);
                    }
                    else
                    {
                        printf("\nInsufficient AB- stock");
                    }
                    break;
                default:
                    printf("\nInvalid donor blood group selection");
                    break;
            }
            break;
        case 6:
            printf("\nCompatible donor blood groups available");
            printf("\n1. B-\t\tCurrent Stock= %d units available", stock[3]);
            printf("\n2. A-\t\tCurrent Stock= %d units available", stock[1]);
            printf("\n3. AB-\t\tCurrent Stock= %d units available", stock[5]);
            printf("\n4. O-\t\tCurrent Stock= %d units available", stock[7]);
            printf("\nSelect the donor blood group to use (1-4)");
            readInteger(&dchoice);
            printf("\nEnter no of units required");
            readInteger(&requnits);
            if (requnits <= 0)
            {
                printf("\nInvalid entry - no fake requests are entertained");
                break;
            }
            switch (dchoice)
            {
                case 1:
                    if (stock[3] >= requnits)
                    {
                        stock[3] -= requnits;
                        printf("\nB negative stock left= %d", stock[3]);
                    }
                    else
                    {
                        printf("\nInsufficient B- stock");
                    }
                    break;
                case 2:
                    if (stock[1] >= requnits)
                    {
                        stock[1] -= requnits;
                        printf("\nA negative stock left= %d", stock[1]);
                    }
                    else
                    {
                        printf("\nInsufficient A- stock");
                    }
                    break;
                case 3:
                    if (stock[5] >= requnits)
                    {
                        stock[5] -= requnits;
                        printf("\nAB negative stock left= %d", stock[5]);
                    }
                    else
                    {
                        printf("\nInsufficient AB- stock");
                    }
                    break;
                case 4:
                    if (stock[7] >= requnits)
                    {
                        stock[7] -= requnits;
                        printf("\nO negative stock left= %d", stock[7]);
                    }
                    else
                    {
                        printf("\nInsufficient O- stock");
                    }
                    break;
                default:
                    printf("\nInvalid donor blood group selection");
                    break;
            }
            break;
        case 7:
            printf("\nCompatible donor blood groups available");
            printf("\n1. O+\t\tCurrent Stock= %d units available", stock[6]);
            printf("\n2. O-\t\tCurrent Stock= %d units available", stock[7]);
            printf("\nSelect the donor blood group to use (1-2)");
            readInteger(&dchoice);
            printf("\nEnter no of units required");
            readInteger(&requnits);
            if (requnits <= 0)
            {
                printf("\nInvalid entry - no fake requests are entertained");
                break;
            }
            switch (dchoice)
            {
                case 1:
                    if (stock[6] >= requnits)
                    {
                        stock[6] -= requnits;
                        printf("\nO positive stock left= %d", stock[6]);
                    }
                    else
                    {
                        printf("\nInsufficient O+ stock");
                    }
                    break;
                case 2:
                    if (stock[7] >= requnits)
                    {
                        stock[7] -= requnits;
                        printf("\nO negative stock left= %d", stock[7]);
                    }
                    else
                    {
                        printf("\nInsufficient O- stock");
                    }
                    break;
                default:
                    printf("\nInvalid donor blood group selection");
                    break;
            }
            break;
        case 8:
            printf("\nCompatible donor blood group available for O- is only O-");
            printf("\nEnter no of units required");
            readInteger(&requnits);
            if (requnits <= 0)
            {
                printf("\nInvalid entry - no fake requests are entertained");
                break;
            }
            if (stock[7] >= requnits)
            {
                stock[7] -= requnits;
                printf("\nO negative stock left= %d", stock[7]);
            }
            else
            {
                printf("\nInsufficient O- stock");
            }
            break;
        default:
            printf("\nInvalid blood group selection");
            break;
    }
}



int main()
{
    int choice = 0;
    int totalUnits;
    int highest;
    int found;
    int patient, donor;
    int i;

    while (choice != 7)
    {
        printf("\n===== BLOOD BANK MANAGEMENT SYSTEM =====\n");
        printf("1. Donor Registration\n");
        printf("2. Blood Stock Management\n");
        printf("3. Search Donors\n");
        printf("4. Emergency Blood Request\n");
        printf("5. Compatibility Checker\n");
        printf("6. Reports and Statistics\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Enter a number.\n");

            while (getchar() != '\n')
            {
            }

            choice = 0;
            continue;
        }

        switch (choice)
        {
            case 1:
                registerDonors();   /* TOOBA'S PART */
                break;

            case 2:
                stockManagement();   /* NITASHA'S PART */
                break;

            case 3:
                searchDonors();   /* TOOBA'S PART */
                break;

            case 4:
                emergencyBloodRequest();   /* HAFSA'S PART */
                break;

            /* ---- AMNA'S PART: Compatibility Checker ---- */
            case 5:
            {
                printf("\n===== COMPATIBILITY CHECKER =====\n");

                printf("1. A+\n");
                printf("2. A-\n");
                printf("3. B+\n");
                printf("4. B-\n");
                printf("5. AB+\n");
                printf("6. AB-\n");
                printf("7. O+\n");
                printf("8. O-\n");

                printf("Enter patient blood group number (1-8): ");

                if (scanf("%d", &patient) != 1)
                {
                    printf("Invalid input! Please enter a number.\n");

                    while (getchar() != '\n')
                    {
                    }

                    break;
                }

                printf("Enter donor blood group number (1-8): ");

                if (scanf("%d", &donor) != 1)
                {
                    printf("Invalid input! Please enter a number.\n");

                    while (getchar() != '\n')
                    {
                    }

                    break;
                }

                if (patient < 1 || patient > 8 ||
                    donor < 1 || donor > 8)
                {
                    printf("Invalid blood group selection.\n");
                }
                else if (patient == 1)
                {
                    if (donor == 1 || donor == 2 ||
                        donor == 7 || donor == 8)
                        printf("Compatible.\n");
                    else
                        printf("Not compatible.\n");
                }
                else if (patient == 2)
                {
                    if (donor == 2 || donor == 8)
                        printf("Compatible.\n");
                    else
                        printf("Not compatible.\n");
                }
                else if (patient == 3)
                {
                    if (donor == 3 || donor == 4 ||
                        donor == 7 || donor == 8)
                        printf("Compatible.\n");
                    else
                        printf("Not compatible.\n");
                }
                else if (patient == 4)
                {
                    if (donor == 4 || donor == 8)
                        printf("Compatible.\n");
                    else
                        printf("Not compatible.\n");
                }
                else if (patient == 5)
                {
                    printf("Compatible.\n");
                }
                else if (patient == 6)
                {
                    if (donor == 2 || donor == 4 ||
                        donor == 6 || donor == 8)
                        printf("Compatible.\n");
                    else
                        printf("Not compatible.\n");
                }
                else if (patient == 7)
                {
                    if (donor == 7 || donor == 8)
                        printf("Compatible.\n");
                    else
                        printf("Not compatible.\n");
                }
                else if (patient == 8)
                {
                    if (donor == 8)
                        printf("Compatible.\n");
                    else
                        printf("Not compatible.\n");
                }

                break;
            }

            
            case 6:
            {
                totalUnits = 0;
                highest = 0;
                found = 0;

                for (i = 0; i < 8; i++)
                {
                    totalUnits = totalUnits + stock[i];

                    if (stock[i] > highest)
                    {
                        highest = stock[i];
                    }
                }

                printf("\n===== REPORTS AND STATISTICS =====\n");
                printf("Total registered donors: %d\n", registeredDonors);

                printf("\nBlood Stock Details:\n");

                for (i = 0; i < 8; i++)
                {
                    printf("%s = %d units\n",
                           bloodGroups[i], stock[i]);
                }

                printf("Total blood units: %d\n", totalUnits);
                printf("Highest stock: %d units\n", highest);

                printf("\nGroups with highest stock:\n");

                for (i = 0; i < 8; i++)
                {
                    if (stock[i] == highest)
                    {
                        printf("%s\n", bloodGroups[i]);
                    }
                }

                printf("\nLow Stock Warnings:\n");

                for (i = 0; i < 8; i++)
                {
                    if (stock[i] < LOW_STOCK_THRESHOLD)
                    {
                        printf("Warning: %s has only %d units.\n",
                               bloodGroups[i], stock[i]);
                        found = 1;
                    }
                }

                if (found == 0)
                {
                    printf("No low-stock groups.\n");
                }

                break;
            }

            case 7:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
