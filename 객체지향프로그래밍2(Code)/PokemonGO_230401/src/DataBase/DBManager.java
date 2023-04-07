package DataBase;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

public class DBManager {
    private Connection cnt;
    static Statement stm;

    // DB 연결
    void connectDB(){
        try{
            // 자바 라이브러리 파일 로드
            Class.forName("com.mysql.jdbc.Driver");

            // 네트워크 입출력 객체 생성
            cnt = DriverManager.getConnection("jdbc:mysql://localhost:3306","root","1234");

            // 워크시트 생성
            stm = cnt.createStatement();

            // 기존에 pokemonGO_DB 있었으면 테이블 삭제
            stm.executeUpdate("DROP DATABASE IF EXISTS `pokemonGO_DB`");

            // pokemonGO_DB 데이터베이스 생성
            stm.executeUpdate("CREATE DATABASE `pokemonGO_DB`");
            
            // pokemonGO_DB 데이터베이스 사용 가능토록 설정
            stm.executeUpdate("USE `pokemonGO_DB`");



        } catch(Exception e){
            e.printStackTrace();
        }
    }

    // DB 연결 해제
    void closeDB(){
        try{
            // DB 연결 해제
            cnt.close();

        } catch (Exception e){
            e.printStackTrace();
        }
    }


    // DB 데이터 생성(CREATE)
    // pokemonGO_DB 데이터베이스
    // - pokemonDataBase 테이블 (id 포켓몬 고유 번호 (int _ PK), name 포켓몬 이름 (char), skill1 스킬1 (char), skill2 스킬2 (char))

    // - wildPokemonDictionary 테이블 (id 포켓몬 고유 번호 (int _ PK), pokemon_dictionary_id 포켓몬 도감 번호 (int), name 포켓몬 이름 (char), skill1 스킬1 (char), skill2 스킬2 (char))

    // - GYM 테이블 (id 체육관 고유 번호 (int _ PK), GymName 체육관 이름 (char), GymMasterName 관장 이름 (char), GymMasterPokemon 포켓몬 이름 (char),
    //              GymPokemonSkill1 스킬명1 (char), Skill1_Power 스킬1 힘 (int),GymPokemonSkill2 스킬명2 (char), Skill2_Power 스킬2 힘 (int),
    //              GymPokemonSkill3 스킬명3 (char), Skill3_Power 스킬3 힘 (int), GymBadge 체육관 뱃지 이름 (char))

    // - Badge 테이블 (id 뱃지 고유 번호 (int _ PK),  badge_id 뱃지 저장 번호 (int), GymName 체육관 이름 (char), badgeName 뱃지 이름 (char))

    void createPokemonDB(){
        try{
            // pokemonDataBase (야생포켓몬 목록 테이블 생성 쿼리문)
            stm.executeUpdate(
                    "CREATE TABLE `pokemonDataBase`(" +
                            "`id` INT PRIMARY KEY NOT NULL AUTO_INCREMENT, " +
                            "pokemonName varchar(70), " +
                            "skill1 varchar(70), " +
                            "skill2 varchar(70))");

            // wildPokemonDictionary (야생포켓몬 도감 테이블 생성 쿼리문)
            stm.executeUpdate(
                    "CREATE TABLE `wildPokemonDictionary`(" +
                            "`id` INT PRIMARY KEY NOT NULL AUTO_INCREMENT, " +
                            "pokemon_dictionary_id INT, " +
                            "pokemonName varchar(70), " +
                            "skill1 varchar(70), " +
                            "skill2 varchar(70))");

            // GYM (체육관 기본 정보 테이블 생성 쿼리문)
            stm.executeUpdate(
                    "CREATE TABLE `GYM`(" +
                            "id INT PRIMARY KEY NOT NULL AUTO_INCREMENT, " +
                            "GymName varchar(70), " +
                            "GymMasterName varchar(70), " +
                            "GymMasterPokemon varchar(70), " +
                            "GymPokemonSkill1 varchar(70), " +
                            "Skill1_Power INT, " +
                            "GymPokemonSkill2 varchar(70), " +
                            "Skill2_Power INT, " +
                            "GymPokemonSkill3 varchar(70), " +
                            "Skill3_Power INT, " +
                            "GymBadge varchar(70)" +")");

            // Badge (배찌 기본 정보 테이블 생성 쿼리문)
            stm.executeUpdate(
                    "CREATE TABLE `Badge`(" +
                            "id INT PRIMARY KEY NOT NULL AUTO_INCREMENT, " +
                            "badge_id INT, " +
                            "GymName varchar(70), " +
                            "badgeName varchar(70))");

            // 한국어 사용 가능하도록 설정
            stm.executeUpdate("ALTER TABLE `pokemonDataBase` convert to charset utf8");
            stm.executeUpdate("ALTER TABLE `wildPokemonDictionary` convert to charset utf8");
            stm.executeUpdate("ALTER TABLE `GYM` convert to charset utf8");
            stm.executeUpdate("ALTER TABLE `Badge` convert to charset utf8");

        } catch(Exception e){
            e.printStackTrace();
        }
    }


    // DB 데이터 입력(INSERT)
    // 야생포켓몬 목록 DB 저장
    void insertWildPokemon(){
        try{
            PokemonDBSaveDetail[] pokemonList = {
                    new PokemonDBSaveDetail("마그마", "불꽃펀치","화염방사"),
                    new PokemonDBSaveDetail("슈륙챙이", "거품광선","물대포"),
                    new PokemonDBSaveDetail("세꿀버리", "바람일으키기","벌레의야단법석"),
                    new PokemonDBSaveDetail("로즈레이드", "메지컬리프","꽃보라"),
                    new PokemonDBSaveDetail("잠만보", "코골기","메가톤펀치"),
                    new PokemonDBSaveDetail("망나뇽", "드래콘테일","회오리"),
                    new PokemonDBSaveDetail("팬텀", "섀도펀치","섀도볼"),
                    new PokemonDBSaveDetail("롱스톤", "스톤샤워","락블레스트"),
                    new PokemonDBSaveDetail("버터플", "환상빔","실뿜기"),
                    new PokemonDBSaveDetail("야도란", "사념의박치기","물의파동"),
                    new PokemonDBSaveDetail("라플레시아", "메가드레인","꽃잎댄스"),
                    new PokemonDBSaveDetail("마릴", "힘껏치기","아쿠아링"),
                    new PokemonDBSaveDetail("브케인", "화염바퀴","불꽃엄니"),
                    new PokemonDBSaveDetail("나무지기", "리프스톰","나뭇잎"),
                    new PokemonDBSaveDetail("다크라이", "악의파동","사이코키네시스"),
                    new PokemonDBSaveDetail("불꽃숭이", "화염자동차","불꽃세례"),
                    new PokemonDBSaveDetail("또도가스", "오물폭탄","스모그"),
                    new PokemonDBSaveDetail("괴력몬", "리벤지","폭발펀치"),
                    new PokemonDBSaveDetail("쟝고", "더블어택","칼등치기"),
                    new PokemonDBSaveDetail("폴리곤", "트라이어택","객기")
            };

            // 야생 포켓몬 목록 입력 쿼리
            for (PokemonDBSaveDetail pNS : pokemonList){

                stm.executeUpdate("INSERT INTO `pokemonDataBase` " +
                        "VALUES(0,'" + pNS.getName() + "', '" + pNS.getSkill1() + "', '" + pNS.getSkill2() + "')");

                stm.executeUpdate("INSERT INTO `wildPokemonDictionary` " +
                        "VALUES(0, null, null, null, null)");
            }
        } catch(Exception e){
            e.printStackTrace();
        }
    }

    // DB 데이터 입력(INSERT)
    // 체육관 목록 DB 저장
    void insertGymInfo(){
        try{
            GymDBSaveDetail[] GymList = {
                    new GymDBSaveDetail("SJ GYM", "차상진",
                            "형사구스","째려보기",30,
                            "돌진",35,
                            "난동부리기",40,
                            "용감한 초심자"),

                    new GymDBSaveDetail("TG GYM", "김태간",
                            "프리져","얼어붙는 시선",35,
                            "에어슬래시",40,
                            "사이코커터",35,
                            "성장하는 도전가")

            };

            for (GymDBSaveDetail gNS : GymList){

                stm.executeUpdate("INSERT INTO `GYM` " +
                        "VALUES(0,'" + gNS.getGymName() + "', '" + gNS.getGymMasterName() + "', '" +
                        gNS.getGymPokemon() + "', '" + gNS.getGymPokemonSkill1() + "', '" + gNS.getPokemonSkill1Power() + "', '" +
                        gNS.getGymPokemonSkill2() + "', '" + gNS.getPokemonSkill2Power() + "', '" +
                        gNS.getGymPokemonSkill3() + "', '" + gNS.getPokemonSkill3Power() + "', '" +
                        gNS.getBadge() + "')");

                stm.executeUpdate("INSERT INTO `Badge` " +
                        "VALUES(0, null, null, null)");

            }
        } catch(Exception e){
            e.printStackTrace();
        }
    }

    
    // DBManager() 객체 생성 시 기본 데이터 실행, 추가되도록 함수 작성
    public DBManager() {
        try {
            connectDB();
            createPokemonDB();
            insertWildPokemon();
            insertGymInfo();

        } catch(Exception e){
            e.printStackTrace();
        }
    }
}
