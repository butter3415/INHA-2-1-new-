package Pokemons.level3;

import Action.Attack;
import Pokemons.level2.Anibugi;

import java.util.Scanner;

public class GgobuckKing extends Anibugi implements Attack {
    public GgobuckKing() {
        setters("거북왕",getPower(),getSpeed());
        setSkills(String(getSkills())+"/하이드로펌프/로케트박치기");
    }
    public void attack(){
        Scanner scanner = new Scanner(System.in);
        int menu = scanner.nextInt();
        System.out.println(getName() + "가 "+ getSkills().get(menu-1) + "을(를) 시전했습니다.");
    }
}
