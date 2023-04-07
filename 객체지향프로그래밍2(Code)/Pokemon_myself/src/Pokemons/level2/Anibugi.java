package Pokemons.level2;

import Action.Attack;
import Pokemons.level1.Ggobugi;

import java.util.Scanner;

public class Anibugi extends Ggobugi implements Attack {
    public Anibugi() {
        setters("어니부기",100,80);
        setSkills("물기/물대포");
    }



    public void attack(){
        Scanner scanner = new Scanner(System.in);
        int menu = scanner.nextInt();
        System.out.println(getName() + "가 "+ getSkills().get(menu-1) + "을(를) 시전했습니다.");
    }
}
