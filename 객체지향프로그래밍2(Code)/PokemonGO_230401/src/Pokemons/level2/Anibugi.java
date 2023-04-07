package Pokemons.level2;

import Action.Attack;
import Pokemons.level1.Ggobugi;
import Settings.ChooseMyPokemon;

import java.util.Scanner;

public class Anibugi extends Ggobugi implements Attack {
    public Anibugi() {
        setters("어니부기", getPower(),getSpeed());
        setSkills(String(getSkills())+"/물기/물대포");
    }

    public void attack(){
        Scanner scanner = new Scanner(System.in);
        int menu = scanner.nextInt();
        System.out.println(getName() + "가 "+ getSkills().get(menu-1) + "을(를) 시전했습니다.");
    }



}
