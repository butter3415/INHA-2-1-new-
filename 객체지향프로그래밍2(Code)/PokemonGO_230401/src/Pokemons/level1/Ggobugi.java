package Pokemons.level1;
import Pokemons.Pokemon;
import Action.Attack;
import java.util.Scanner;


public class Ggobugi extends Pokemon implements Attack {
    public Ggobugi() {
        setters("꼬부기",22, 22);
        setSkills("몸통박치기/거품광선");
    }
    public void attack(){
        Scanner scanner = new Scanner(System.in);
        int menu = scanner.nextInt();
        System.out.println(getName() + "가 "+ getSkills().get(menu-1) + "을(를) 시전했습니다.");
    }
}


