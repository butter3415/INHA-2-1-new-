package Pokemons;

import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public abstract class Pokemon {
    private String name;
    private int power;
    private int speed;
    private List<String> skills;


    public Pokemon() {setters(name, power, speed);}

    public String getName() {
        return name;
    }
    public int getPower() {
        return power;
    }
    public int getSpeed() {
        return speed;
    }


    public List<String> getSkills() {
        return skills;
    }

    public void setName(String name) {
        this.name = name;
    }
    public void setPower(int power) {
        this.power = power;
    }
    public void setSpeed(int speed) {
        this.speed = speed;
    }

    public void setSkills(String skills) {
        StringTokenizer st = new StringTokenizer(skills, "/");
        this.skills = new ArrayList<>();
        while(st.hasMoreTokens()){
            this.skills.add(st.nextToken());
        }
    }

    public void setters(String name, int power, int speed){
        setName(name);
        setPower(power);
        setSpeed(speed);
    }
}