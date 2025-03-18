//import java.util.*;
import java.util.Scanner;
import java.util.Random;

class randomJava {
    static void metodoRandom(int num) {
        Random n = new Random();
        for (int a = 0; a < 5; a++) {
            num = n.nextInt(10);
            System.out.println("metodo random" + num);
        }
    }
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Dame el numero a elegir");
        int num1 = entrada.nextInt();
        metodoRandom(num1);
    }
}