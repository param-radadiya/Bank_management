package com.company;

import java.util.Scanner;

class bankaccount
{
    String[][] name = new String[5][20];
    int[] accnum = new int[5];
    int[] type = new int[5];
    float[] balance = new float[5];
    int count=0;

    Scanner sc = new Scanner(System.in);

    void cnt(){ count=0; }
    void newacc(){
        System.out.print("Enter Depositor Name : ");
        name[count][10] = sc.nextLine();

        System.out.print("Enter Account Number : ");
        accnum[count] = sc.nextInt();
        System.out.print("Enter Account Type(1. Saving/ 2.Current) : ");
        type[count] = sc.nextInt();
        System.out.print("Enter Amount of Balance : ");
        balance[count] = sc.nextFloat();
        count++;

        System.out.println("\n\n Data Stored.....");
    }

    void deposit(){
        int n, a=0;
        float d;

        System.out.print("\t Enter Account Number : ");
        n = sc.nextInt();
        System.out.print("\t Enter Amount to Deposit : ");
        d = sc.nextFloat();

        for(int i=0; i<count;i++){
            if(accnum[i] == n){
                a=n;
                balance[i] = balance[i] + d;
            }
        }
        if(a==0){
            System.out.println("\t > Account Not Found");
        }
        else{
            System.out.println("\t > Amount Deposited");
        }
    }

    void withdraw(){
        int n,a=0;
        float w;

        System.out.print("\t\t > Enter Account Number : ");
        n = sc.nextInt();
        System.out.print("\t\t > Enter Amount to Withdraw ($) : ");
        w = sc.nextFloat();
        for(int i=0;i<count;i++)
        {
            if(accnum[i]==n)
            {
                a=n;
                balance[i] = balance[i] - w;
            }
        }

        if(a==0)
        {
            System.out.println("\t >> Account NOT FOUND !!\n");
        }
        else
        {
            System.out.println("\t Amount Withdrawn.....");
        }
    }

    void displayall(){

        System.out.println("\t NAME\t Acc. No.\t Balance");
        for(int i=0;i<count;i++)
        {
            System.out.print("\t " + name[i]);
            System.out.print("\t  " + accnum[i]);
            System.out.print("\t\t  " + balance[i] + " $");
            System.out.println("");

        }
        System.out.println("\n\n");
    }

    void checkbal(){
        int n,a=0;
        System.out.println("\n\t\t > Enter Account Number : ");
        n = sc.nextInt();

        for(int i=0;i<count;i++)
        {
            if(accnum[i]==n)
            {
                System.out.println("\n\t\t > Balance = " + balance[i] + "\n");
                a=1;
            }
        }
        if(a==0)
        {
            System.out.println("\n\t\t >> Account NOT FOUND !!");
        }
    }

    void design(){
        System.out.print("-----------------------------------");
    }
}


public class ProjectBankMan {
    public static void main(String[] args){

        int p;
        bankaccount acc1 = new bankaccount();

        Scanner sc = new Scanner(System.in);

        do
        {
            acc1.design();
            System.out.println("\n\t\t\t::  Bank  ::");
            System.out.println("\tEnter appropriate number ");
            System.out.println("\t  [1] Add Account ");
            System.out.println("\t  [2] Deposit Amount ");
            System.out.println("\t  [3] Withdraw Money ");
            System.out.println("\t  [4] Check Balance ");
            System.out.println("\t  [5] Display All Account ");
            System.out.println("\t  [0] Quit ");
            acc1.design();
            System.out.print("\n\t Enter your choice : ");
            p = sc.nextInt();

            switch(p)
            {
                case 1: acc1.newacc(); break;
                case 2: acc1.deposit(); break;
                case 3: acc1.withdraw(); break;
                case 4: acc1.checkbal(); break;
                case 5: acc1.displayall(); break;
                case 0: return;
                default:
                {
                    System.out.println("\n\n\t\t>> Invalid Input \n\t\t Try Again !!");
                }
            }
        }while(true);
    }
}

