package Pokemons.level3;

import Action.Attack;
import Pokemons.level2.Lizard;

import java.util.Scanner;

public class Lizamong extends Lizard implements Attack {
    public Lizamong() {
        setters("리자몽", 115, 130);
        setSkills("회오리 불꽃/블라스트번");
    }

    public void attack() {
        Scanner scanner = new Scanner(System.in);
        int menu = scanner.nextInt();
        System.out.println(getName() + "가 " + getSkills().get(menu - 1) + "을(를) 시전했습니다.");
    }
}
