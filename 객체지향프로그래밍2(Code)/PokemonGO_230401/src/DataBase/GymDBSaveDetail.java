package DataBase;

public class GymDBSaveDetail {
    private String GymName;
    private String GymMasterName;
    private String GymPokemon;
    private String GymPokemonSkill1;
    private int PokemonSkill1Power;
    private String GymPokemonSkill2;
    private int PokemonSkill2Power;
    private String GymPokemonSkill3;
    private int PokemonSkill3Power;
    private String Badge;

    public GymDBSaveDetail(String gymName, String gymMasterName, String gymPokemon,
                           String gymPokemonSkill1, int pokemonSkill1Power,
                           String gymPokemonSkill2, int pokemonSkill2Power,
                           String gymPokemonSkill3, int pokemonSkill3Power,
                           String badge) {
        GymName = gymName;
        GymMasterName = gymMasterName;
        GymPokemon = gymPokemon;
        GymPokemonSkill1 = gymPokemonSkill1;
        PokemonSkill1Power = pokemonSkill1Power;
        GymPokemonSkill2 = gymPokemonSkill2;
        PokemonSkill2Power = pokemonSkill2Power;
        GymPokemonSkill3 = gymPokemonSkill3;
        PokemonSkill3Power = pokemonSkill3Power;
        Badge = badge;
    }

    public String getGymName() {
        return GymName;
    }

    public String getGymMasterName() {
        return GymMasterName;
    }

    public String getGymPokemon() {
        return GymPokemon;
    }

    public String getGymPokemonSkill1() {
        return GymPokemonSkill1;
    }

    public int getPokemonSkill1Power() {
        return PokemonSkill1Power;
    }

    public String getGymPokemonSkill2() {
        return GymPokemonSkill2;
    }

    public int getPokemonSkill2Power() {
        return PokemonSkill2Power;
    }

    public String getGymPokemonSkill3() {
        return GymPokemonSkill3;
    }

    public int getPokemonSkill3Power() {
        return PokemonSkill3Power;
    }

    public String getBadge() {
        return Badge;
    }
}
