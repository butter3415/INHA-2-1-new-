package Pokemons.level3;

import Action.Attack;
import Pokemons.level2.IsanghaeGrass;

import java.util.Scanner;

public class IsanghaeFlower extends IsanghaeGrass implements Attack {
    public IsanghaeFlower() {
        setters("이상해꽃",getPower(),getSpeed());
        setSkills(String(getSkills())+"/솔라빔/꽃잎댄스");
    }

    public void attack(){
        Scanner scanner = new Scanner(System.in);
        int menu = scanner.nextInt();
        System.out.println(getName() + "가 "+ getSkills().get(menu-1) + "을(를) 시전했습니다.");
    }
}
