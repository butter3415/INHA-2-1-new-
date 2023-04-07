package Pokemons.level1;

import Action.Attack;
import Pokemons.Pokemon;

import java.util.Scanner;

public class Pairi extends Pokemon implements Attack {
    public Pairi() {
        setters("파이리",20,24);
        setSkills("불꽃 세례/할퀴기");
    }

    public void attack(){
        Scanner scanner = new Scanner(System.in);
        int menu = scanner.nextInt();
        System.out.println(getName() + "가 "+ getSkills().get(menu-1) + "을(를) 시전했습니다.");
    }
}

