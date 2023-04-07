package Pokemons.level1;
import Action.Attack;
import Pokemons.Pokemon;

import java.util.Scanner;

public class IsanghaeSeed extends Pokemon implements Attack {
    public IsanghaeSeed() {
        setters("이상해씨",85,85);
        setSkills("씨폭탄/앞날가르기");
    }
    public void attack(){
        Scanner scanner = new Scanner(System.in);
        int menu = scanner.nextInt();
        System.out.println(getName() + "가 "+ getSkills().get(menu-1) + "을(를) 시전했습니다.");
    }
}

