import java.util.*;

class ejemploMul {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int digito, multi;
        System.out.println("Dame el digito a multiplcar");
        digito = entrada.nextInt();
        for (int i = 1; i <= 10; i++) {
            multi = digito * i;
            System.out.println("El resultado es" + multi);
        }
    }
}