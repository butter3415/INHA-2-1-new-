package Pokemons.level2;

import Action.Attack;
import Pokemons.level1.IsanghaeSeed;

import java.util.Scanner;

public class IsanghaeGrass extends IsanghaeSeed implements Attack {
    public IsanghaeGrass() {
        setters("이상해풀", 100, 85);
        setSkills("오물폭탄/기가드레인");
    }
    public void attack(){
        Scanner scanner = new Scanner(System.in);
        int menu = scanner.nextInt();
        System.out.println(getName() + "가 "+ getSkills().get(menu-1) + "을(를) 시전했습니다.");
    }
}
