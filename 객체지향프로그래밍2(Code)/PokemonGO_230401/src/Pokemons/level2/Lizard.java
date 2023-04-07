package Pokemons.level2;

import Action.Attack;
import Pokemons.level1.Pairi;

import java.util.Scanner;

public class Lizard extends Pairi implements Attack {
    public Lizard() {
        setters("리쟈드",getPower(),getSpeed());
        setSkills(String(getSkills())+"/불꽃엄니/화염방사");
    }
    public void attack(){
        Scanner scanner = new Scanner(System.in);
        int menu = scanner.nextInt();
        System.out.println(getName() + "가 "+ getSkills().get(menu-1) + "을(를) 시전했습니다.");
    }
}
