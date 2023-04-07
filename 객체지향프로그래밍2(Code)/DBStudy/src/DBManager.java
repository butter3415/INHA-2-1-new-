import java.sql.*;

public class DBManager {


    private Connection cnt;
    private Statement stm;

    public Connection getCnt() {
        return cnt;
    }

    public void setCnt(Connection cnt) {
        this.cnt = cnt;
    }

    public Statement getStm() {
        return stm;
    }

    public void setStm(Statement stm) {
        this.stm = stm;
    }

    public DBManager() {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            cnt = DriverManager.getConnection("jdbc:mysql://localhost:3306","root","1234");
            stm = cnt.createStatement();

//            stm.executeUpdate("DROP DATABASE IF EXISTS `dbstudy`");	// pokemondb 에 내용 있으면 초기화
//            stm.executeUpdate("CREATE DATABASE `dbstudy`");	// pokemondb 생성
//
//            stm.executeUpdate("USE `dbstudy`");	// 테이블 만들기	// 더블 클릭 가능
//
//            stm.executeUpdate("CREATE TABLE `study`(id INT PRIMARY KEY NOT NULL AUTO_INCREMENT, name VARCHAR(45), `power` INT, `speed` INT)");

            stm.executeUpdate("DROP DATABASE IF EXISTS `dbpokemon`");
            stm.executeUpdate("CREATE DATABASE `dbpokemon`");
            stm.executeUpdate("USE `dbpokemon`");

            stm.executeUpdate("CREATE TABLE `wildPokemon`(id INT PRIMARY KEY NOT NULL AUTO_INCREMENT, name varchar(45), `power` INT, `speed` INT)");
            stm.executeUpdate("CREATE TABLE `wildPokemonDictionary`(id INT PRIMARY KEY NOT NULL AUTO_INCREMENT, pokemon_dictionary_id INT, FOREIGN KEY(pokemon_dictionary_id) REFERENCES wildpokemon(id))");

            String[] wildPokemonName = {"pikachu", "duji","nidrun","bbibbi"};
            int[] wildPokemonPower = {80,90,85,100};
            int[] wildPokemonSpeed = {85,76,99,105};


            stm.executeUpdate("INSERT INTO `wildPokemon` VALUES(0,'" + wildPokemonName[0] + "', '" +  wildPokemonPower[0] + "', '" + wildPokemonSpeed[0] + "')");
            stm.executeUpdate("INSERT INTO `wildPokemon` VALUES(0,'" + wildPokemonName[1] + "', '" +  wildPokemonPower[1] + "', '" + wildPokemonSpeed[1] + "')");
            stm.executeUpdate("INSERT INTO `wildPokemon` VALUES(0,'" + wildPokemonName[2] + "', '" +  wildPokemonPower[2] + "', '" + wildPokemonSpeed[2] + "')");
            stm.executeUpdate("INSERT INTO `wildPokemon` VALUES(0,'" + wildPokemonName[3] + "', '" +  wildPokemonPower[3] + "', '" + wildPokemonSpeed[3] + "')");


//            String[] temp = {"ggobugi", "pairi", "isanhasessi", "pikachu", "lizamong"};
//            for (int i = 0; i < temp.length; i++) {
//                stm.executeUpdate("INSERT INTO `study` VALUES(0, '" + temp[i] + "', '" + 0 + "', '" + 0 + "')");
//            }

        } catch(Exception e){
            e.printStackTrace();
        }
    }
}