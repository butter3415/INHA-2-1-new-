package DataBase;

public class PokemonDBSaveDetail {
    private String name;
    private String skill1;
    private String skill2;

    public PokemonDBSaveDetail(String name, String skill1, String skill2) {
        this.name = name;
        this.skill1 = skill1;
        this.skill2 = skill2;
    }

    public String getName() {
        return name;
    }

    public String getSkill1() {
        return skill1;
    }

    public String getSkill2() {
        return skill2;
    }
}
