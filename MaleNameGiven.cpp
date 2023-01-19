#include<iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>   
#include <time.h> 
#include <algorithm>

#include "MaleNameGiven.h"
using namespace std;


//MaleNameGiven::MaleNameGiven(int select)
//{
//    this->firstName = getFirstName(select);
//}

vector<string> MaleNameGiven::africanGivenNamesMale() const
{

    vector<string> names = { "Afram", "Arali", "Armani", "Banji", "Chata", "Chiamaka", "Chike", "Dakarai", "Deion", "Deiondre", "Dele", "Dembe", "Denzel", "Dewayne", "Diallo", "Dikembe", "Duante", "Dume", "Ebi", "Essien", "Faraji", "Ibeamaka", "Jamar", "Jayvyn", "Jevonte", "Kabonero", "Kabonesa", "Kadeem", "Kaleb", "Kasi", "Kendis", "Kentay", "Keshawn", "Khalon", "Kofi", "Kwamin", "Kwau", "Kyan", "Kyrone", "La Vonn", "Lado", "Laken", "Lakista", "Lamech", "Lavaughn", "LeBron", "Lisimba", "Ludacris", "Lugono", "Luister", "Mablevi", "Mahdi", "Makalo", "Manu", "Marques", "Mashawn", "Montraie", "Mykelti", "Nabulung", "Naeem", "Naftali", "Napoleon", "Nuru", "Nwa", "Obiajulu", "Oja", "Okal", "Okapi", "Okoth", "Onaedo", "Ontibile", "Oringo", "Orma", "Otieno", "Paulo", "Peabo", "Penda", "Phornello", "Polo", "Quaashie", "Quaddus", "Quadrees", "Quannell", "Quarren", "Quashawn", "Quintavius", "Quoitrel", "Raimy", "Rashon", "Razi", "Roshaun", "Runako", "Salim", "Shaquille", "Shevon", "Shontae", "Simba", "Sulaiman", "Tabansi", "Tabari", "Tamarius", "Tavarius", "Tavon", "Tevaughn", "Tevin", "Trory", "Tyrell", "Uba", "Ubanwa", "Udenwa", "Ulan", "Uland", "Umi", "Useni", "Usi", "Uzoma", "Uzondu", "Vandwon", "Vashon", "Veltry", "Verlyn", "Voshon", "Vul", "Wasaki", "Xayvion", "Xhosas", "Xyshaun", "Yobachi", "Zaid", "Zareb", "Zashawn", "Girls", "Mahdi", "Maisha", "Maizah", "Malaika", "Malkia", "Mandisa", "Manyara", "Marjani", "Mekell", "Messina", "Moesha", "Muncel", "Nafuna", "Nailah", "Naja", "Najwa", "Nakeisha", "Nala", "Narkaesha", "Nasha", "Nashaly", "Nichelle", "Niesha", "Nimeesha", "Nyeki", "Okal", "Okapi", "Onaedo", "Ontibile", "Paka", "Panya", "Pasua", "Pedzi", "Pemba", "Penda", "Pita", "Quanella", "Quanesha", "Quisha", "Raimy", "Ranielle", "Rashida", "Raziya", "Ronnell", "Safara", "Safiya", "Saidah", "Salihah", "Sekai", "Semira" };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::africanAmericanGivenNamesMale() const
{

    vector<string> names = { "Deion", "Deiondre", "Dele", "Denzel", "Dewayne", "Dikembe", "Duante", "Jamar", "Jevonte", "Kadeem", "Kendis", "Kentay", "Keshawn", "Khalon", "Kofi", "Kwamin", "Kyan", "Kyrone", "La Vonn", "Lado", "Laken", "Lakista", "Lamech", "Lavaughn", "LeBron", "Lisimba", "Ludacris", "Mablevi", "Marques", "Mashawn", "Montraie", "Mykelti", "Nabulung", "Naeem", "Napoleon", "Obiajulu", "Quaashie", "Quaddus", "Quadrees", "Quannell", "Quarren", "Quashawn", "Quintavius", "Quoitrel", "Raimy", "Rashon", "Razi", "Roshaun", "Runako", "Salim ", "Shaquille", "Shevon", "Shontae", "Sulaiman", "Tabansi", "Tabari", "Tamarius", "Tavarius ", " Tavon", "Tevaughn", "Tevin", "Trory", "Tyrell", "Uba", "Ulan", "Uzoma", "Vandwon", "Vashon", "Veltry", "Verlyn", "Voshon", "Xayvion", "Xyshaun", "Yobachi", "Zaid", "Zareb", "Zashawn"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::americanGivenNamesMale() const
{

    vector<string> names = { "Acura", "Audio", "Babyface", "Banjo", "Blaze", "Bono", "Boston", "Butch", "Cola", "Coolio", "Corvette", "Deandre", "Delmonte", "Disney", "Draylan", "Droe", "Durango", "Duras", "Dwalin", "Edsel", "Eminem", "ESPN", "Hamaliel", "Harlem", "Hopper", "Hovie", "Hulk", "Jace", "Jaxon", "Jay-Z", "Jeeves", "Kacy", "Kaden", "Kadi", "Kamon", "Kance", "Kaper", "Kateo", "Keandre", "Ketchum", "Khambrel", "Kix", "Koshy", "Koster", "Kyzer", "Lafe", "Lando", "Lariat", "Larnell", "Lassiter ", " Leavery", "Len", "Levar", "Loudon", "Loys", "Lucky", "Madock", "Mahan", "Manus", "Matlock", "Maverick", "Mitchell", "Mulder", "Murfain", "Myrle", "Nato", "Nedrun", "Ninyun", "Nodin", "Obedience", "Patch", "Quick", "Raeshon", "Rahn", "Rawleigh", "Rayce", "Ritch", "Roam", "Rooster", "Schae", "Scout", "Seal", "Sedgley", "Selvon", "Sesame", "Seven", "Shante", "Spider", "Stone", "Ukel", "Unitas", "Unser", "Utz", "Vandiver", "Varkey", "Varlan", "Veejay", "Vegas", "Velle", "Verlin"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::arabicGivenNamesMale() const
{

    vector<string> names = { "Aaron", "Abbott", "Abdulaziz", "Abuna", "Adalai", "Adham", "Ahmad", "Akbar", "Al-Ashab", "Ali", "Altair", "Amal", "Amaros", "Amir", "Ankhhaf", "Ara", "Arash", "Arslan", "Asad", "Azad", "Azeem", "Badr", "Basil", "Basim", "Borak", "Boutros", "Coman", "Fahd", "Faisal", "Fakih", "Faraz", "Fatin", "Ferran", "Gamal", "Ghadir", "Ghazi", "Guadalupe", "Habib", "Haddad", "Hadi", "Hafez", "Haidar", "Hakeem", "Hamal", "Hamid", "Hamza", "Harsh", "Harun", "Hasan", "Hormoz", "Hussain", "Ibrahim", "Ilias", "Imad", "Isam", "Jabir", "Jakeem", "Jaleel", "Jawhar", "Jericho", "Juma", "Kadar", "Kadin", "Kadir", "Kahil", "Kalb", "Kalil", "Kamil", "Kardal", "Kareem", "Karif", "Kaseem", "Kasib", "Kateb", "Kaul", "Kedar", "Khairi", "Khalid", "Khoury", "Lateef", "Leron", "Mahdi", "Malcom", "Malik", "Mansour", "Mansur", "Masoud", "Mohamed", "Mohsen", "Moroni", "Muhammad", "Mumtaz", "Munir", "Mustafa", "Nabil", "Naji", "Najib", "Nasim", "Nasser", "Nassir", "Numa", "Nuri", "Oma", "Omar", "Onslow", "Osama", "Osman", "Qabil", "Qadim", "Qadir", "Qamar", "Qasim", "Quasim", "Qudamah", "Qusay", "Raashid", "Radwan", "Rahul", "Rajeev", "Ramadan", "Rami", "Rashaan", "Rehan", "Rigel", "Rimon", "Riyad", "Saddam", "Said", "Samien", "Sammon", "Seif", "Shadrach", "Shah", "Shakar", "Shakil", "Shakir", "Sharif", "Shunnar", "Tahir", "Tamir", "Tariq", "Thabit", "Ubadah", "Umar", "Umher", "Usaid", "Usamah", "Uthman", "Utt", "Vega", "Wahkan", "Waleed", "Waqar", "Waseem", "Wasim", "Xavier", "Yahya", "Yasar", "Yasin", "Yasir", "Yazid", "Yunis", "Yusef", "Zaki", "Zane", "Zayd", "Zayn", "Zeke", "Zimraan", "Zircon", "Zuhayr"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::armenianGivenNamesMale() const
{

    vector<string> names = { "Nishan", "Ohanna", "Vahe", "Vartan", "Yervant"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::celticGivenNamesMale() const
{

    vector<string> names = { "Afton", "Ahearn", "Annan", "Fallon", "Finley", "Kearney", "Keary", "Kegan", "Keir", "Kendall", "Mannix", "Marmaduke", "Melvin", "Merlin", "Murray", "Perth", "Ronan", "Sean", "Tadc", "Tegan", "Tiernan", "Torin", "Tuathal", "Ultan", "Vaughan"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::chineseGivenNamesMale() const
{

    vector<string> names = { "An", "Bing", "Chen", "Chung", "Confucius", "Cong", "Deshi", "Dewei", "Fo-hai", "Fo-hsing", "Gan", "Gao", "Genjo", "Ho", "Hsin", "Huang fu", "Hui-chao", "HuiK", "Jiang", "Jin", "Jing", "Jun", "Kong", "Lao-Tzu", "Lee", "Lei", "Li", "Li-Liang", "Liang", "Liko", "Manchu", "Ming", "Niao-ka", "On", "Qing-Nan", "Quon", "Shen", "Shing", "Sun", "Tung", "Uang", "Wang", "Wen", "Woo", "Wu-pen", "Xi-Wang", "Xiaoping", "Xin", "Xing-fu", "Yao", "Ye", "Yo", "Yong", "Yu", "Yuan", "Zhong", "Zhu", "Zhuang"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::czechGivenNamesMale() const
{

    vector<string> names = { "Bedrich", "Cerny", "Damek", "Karel", "Kliment", "Ladislav", "Libor", "Ludomir", "Oldrich", "Radek", "Radoslav", "Rehor", "Strom", "Vasil", "Vavrin", "Vavrinec", "Veleslav", "Venec", "Vila", "Vladislav", "Vojtech", "Zdenek", "Zitomer"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::danishGivenNamesMale() const
{

    vector<string> names = { "Bartram", "Diederik", "Gardiner", "Hobart", "Ib", "Nils", "Soren"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::dutchGivenNamesMale() const
{

    vector<string> names = { "Hodding", "Kyler", "Maarten", "Rembrandt", "Rodolf", "Roosevelt", "Schuyler", "Sklaer", "Van", "Vandyke", "Wagner", "Zeeman"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::egyptianGivenNamesMale() const
{

    vector<string> names = { "Imhotep", "Paki", "Rahotep", "Zahur"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::englishGivenNamesMale() const
{

    vector<string> names = { "Adney", "Aldo", "Aleyn", "Alford", "Amherst", "Angel", "Anson", "Archibald", "Aries", "Arwen", "Astin", "Atley", "Atwell", "Audie", "Avery", "Ayers", "Baker", "Balder", "Ballentine", "Bardalph", "Barker", "Barric", "Bayard", "Bishop", "Blaan", "Blackburn", "Blade", "Blaine", "Blaze", "Bramwell", "Brant", "Brawley", "Breri", "Briar", "Brighton", "Broderick", "Bronson", "Bryce", "Burdette", "Burle", "Byrd", "Byron", "Cabal", "Cage", "Cahir", "Cavalon", "Cedar", "Chatillon", "Churchill", "Clachas", "Cleavant", "Cleomenes", "Cloten", "Colson", "Colton", "Crandall", "Cupid", "Curio", "Dacian", "Dack", "Daelen", "Dagonet", "Dailan", "Dakin", "Dallin", "Dalton", "Dartmouth", "Dathan", "Dawson", "Dax", "Deandre", "Demarco", "Denton", "Denver", "Denzel", "Derward", "Diamond", "Dickinson", "Dillard", "Doane", "Doc", "Draper", "Dugan", "Dunley", "Dunn", "Dunstan", "Dwyer", "Dyson", "Ebony", "Edison", "Edred", "Edwy", "Egbert", "Eldwin", "Elgin", "Ellis", "Elwood", "Emmett", "Errol", "Escalus", "Ethelbert", "Ethelred", "Ethelwolf", "Everest", "Ewing", "Falkner", "Falstaff", "Farnell", "Farold", "Farran", "Fenton", "Finch", "Fitz", "Fleming", "Flint", "Fox", "Freedom", "Freyr", "Frollo", "Gaines", "Gale", "Gallant", "Gamel", "Garfield", "Garrett", "Geary", "Gene", "Gifford", "Gildas", "Gomer", "Graham", "Grand", "Green", "Gremio", "Gresham", "Griffin", "Grover", "Grumio", "Guard", "Guildenstern", "Guinness", "Hart", "Haskel", "Heathcliff", "Heaton", "Helmut", "Herring", "Herve", "Hickory", "Houston", "Howard", "Howe", "Hoyt", "Hurst", "Huxley", "Indiana", "Innocent", "Jagger", "Jarrell", "Jax", "Jaxon", "Jay", "Jet", "Judson", "Julian", "Kaid", "Keane", "Keaton", "Kell", "Kelsey", "Kelvin", "Kennard", "Kenneth", "Kentlee", "Ker", "Kester", "Kestrel", "Kingsley", "Kirby", "Klay", "Knightley", "Knowles", "Kody", "Kolby", "Kolton", "Kyler", "Lake", "Langden", "Langston", "Lathrop", "Leighton", "Lensar", "Lex", "Lindell", "Lindsay", "Livingston", "Locke", "London", "Lord", "Lowell", "Ludlow", "Luke", "Lusk", "Lyndal", "Lyndall", "Lynn", "Lynton", "Maddox", "Mallin", "Mander", "Mansfield", "Markham", "Marland", "Marley", "Marrock", "Marsh", "Marston", "Martin", "Marvin", "Massey", "Matheson", "Maverick", "Maxwell", "Mayer", "Melborn", "Melbourne", "Melburn", "Meldon", "Melor", "Merrick", "Merton", "Miles", "Monte", "Montgomery", "Moreland", "Morley", "Morrison", "Myles", "Nagel", "Ned", "Nellie", "Nesbit", "Newbury", "Newt", "Nile", "Norman", "Norris", "Northcliff", "Northrop", "Norton", "Norvell", "Norvin", "Norwin", "Nuys", "Obsidian", "Octha", "Odell", "Odette", "Offa", "Orlan", "Ormond", "Orrick", "Orson", "Osborn", "Osgood", "Osric", "Ossie", "Overton", "Pacey", "Parsifal", "Peers", "Pelleas", "Pelton", "Penda", "Pierce", "Piers", "Powell", "Quirin", "Radbert", "Radford", "Radley", "Radnor", "Raine", "Randal", "Rawdan", "Rayce", "Reed", "Reynold", "Rhett", "Rhodes", "Richard", "Ridge", "Ridgley", "Ris", "Rivalen", "Rivers", "Roan", "Robin", "Robson", "Rockleigh", "Rockwell", "Roden", "Roe", "Roldan", "Rosencrantz", "Ross", "Roswell", "Rowley", "Royce", "Rudd", "Rugby", "Rune", "Ryder", "Sadler", "Sage", "Salisbury", "Salter", "Sanborn", "Sandhurst", "Saxon", "Scarus", "Searles", "Seaton", "Sedgwick", "Seger", "Selby", "Seldon", "Selwyn", "Seton", "Severin", "Sewell", "Shade", "Shadow", "Shelby", "Sheldon", "Shepley", "Sherborn", "Sidwell", "Siler", "Simeon", "Siward", "Skye", "Slate", "Smith", "Somerby", "Somerton", "Sommar", "Spalding", "Spaulding", "Speers", "Stafford", "Stamford", "Stanbury", "Stancliff", "Stanwick", "Starr", "Steadman", "Sterling", "Stetson", "Stiles", "Sting", "Stoke", "Storm", "Stuart", "Sunny", "Sydney", "Sylvester", "Taft", "Talon", "Tem", "Templeton", "Thompson", "Thorley", "Thorndike", "Tolbert", "Tyson", "Uchtred", "Udall", "Udel", "Udolf", "Ulland", "Ulmer", "Unten", "Unwin", "Upjohn", "Upton", "Upwood", "Usher", "Uther", "Vail", "Valen", "Verges", "Versey", "Vine", "Vinson", "Vinton", "Voltimand", "Vortigem", "Wadell", "Wadley", "Wadsworth", "Wain", "Waite", "Walcott", "Wales", "Walford", "Walfred", "Walker", "Waller", "Walmir", "Walsh", "Walworth", "Walwyn", "Warburton", "Ward", "Warden", "Wardford", "Wardley", "Ware", "Waring", "Warley", "Warrick", "Warton", "Warwick", "Washburn", "Wat", "Watford", "Wayde", "Waylon", "Webb", "Welcome", "Weldon", "Westbrook", "Whistler", "Whitby", "Whitcomb", "Whittaker", "Wid", "Wiley", "Wilford", "Willow", "Wilton", "Wingy", "Wirt", "Wisdom", "Wissian", "Witton", "Wolcott", "Wolf", "Wolfe", "Woodis", "Woodson", "Wulfsige", "Wyclef", "Wynton", "Wynward", "Wyson", "Wythe", "Yardley", "Yeoman", "Yorath", "Yule", "Zani"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}



vector<string> MaleNameGiven::finnishGivenNamesMale() const
{

    vector<string> names = { "Juhani", "Jussi", "Kevat", "Miko", "Mustanen", "Vaino"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::frenchGivenNamesMale() const
{

    vector<string> names = { "Aleron", "Algernon", "Ames", "Amiens", "Aramis", "Audric", "Beau", "Blaise", "Bonar", "Boniface", "Boyce", "Briar", "Bruce", "Byron", "Cabal", "Cade", "Campbell", "Canaan", "Canon", "Carolus", "Carvell", "Chainey", "Chevy", "Ciel", "Circinus", "Colar", "Colville", "Courvoisier", "Coyne", "Dabney", "Dashiell", "Dax", "Delano", "Demont", "Destin", "Didier", "Dior", "Donatien", "Etienne", "Fabron", "Ferrand", "Franchot", "Francois", "Frasier", "Gage", "Garen", "Gareth", "Garland", "Garner", "Garrison", " Gaston", "Gaylord", "Gerald", "Germain", "Geron", "Giles", "Glanville", "Gower", "Granger", "Grant", "Granville", "Guy", "Hackett", "Hello", "Holland", "Honore", "Jacques", "Jasper", "Javier", "Jean", "Jemond", "Jesper", "Labaron", "Lance", "Landry", "Laramie", "Laron", "Larrimore", "Launcelot", "Laurent", "Leggett", "Leverett", "Lionel", "Luc", "Mallory", "Marcel", "Mardian", "Marin", "Marshall", "Marvel", "Mason", "Merrill", "Montague", "Montgomery", "Montrell", "Montrose", "Mortimer", "Nazaire", "Neville", "Noel", " Odil", "Odilon", "Odo", "Olier", "Oliver", "Olympe", "Orane", "Orleans", "Orson", "Orville", "Ouida", "Page", "Paris", "Pascal", "Percy", "Pernell", "Pierre", "Platt", "Porter", "Quincy", "Rance", "Ranger", "Raul", "Ray", "Raynard", "Remi", "Romain", "Ross", "Royal", "Rupert", "Rush", "Russel", "Saber", "Sargent", "Satch", "Senior", "Sennett", "Sergeant", "Severin", "Seymour", "Sezni", "Sid", "Similien", "Sinclair", "Sinjon", "Sorrel", "Sumner", "Talbot", "Telford", "Tenenan", " Thibaud", "Travis", "Tremeur", "Tugdual", "Tujan", "Turiau", "Tyson", "Umber", "Vachel", "Valeray", "Varden", "Varil", "Varocher", "Verdun", "Vere", "Verity", "Vermont", "Vernon", "Verrier", "Verrill", "Villard", "Villiers", "Xebec", "Yannick"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::gaelicGivenNamesMale() const
{

    vector<string> names = { "Alan", "Angus", "Blaan", "Conan", "Fagan", "Kade", "Keefe", "Keegan", "Keeland", "Keenan", "Kennedy", "Kenyon", "Kermit", "Kern", "Kerry", "Kevin", "Kieran", "Kinnel", "Lawler", "Lee", "Lennon", "Lon", "Mackenzie", "Neal", "Parlan", "Phelan", "Regan", "Renny", "Riley", "Riordan", "Rogan", "Rooney", "Rory", "Ryan", "Seamus", "Senach", "Sheehan", "Slevin", "Sloan", "Sullivan", "Sully", "Sweeny", "Tee"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::germanGivenNamesMale() const
{

    vector<string> names = { "Abelard", "Adie", "Adler", "Adolph", "Alaric", "Albert", "Albrecht", "Alger", "Ancel", "Arland", "Armand", "Arnold", "Avicus", "Baldwin", "Baltasar", "Baron", "Bergen", "Bernard", "Bernstein", "Bertram", "Bingham", "Bogart", "Brandeis", "Bronson", "Bud", "Burke", "Burle", "Carsten", "Clay", "Clovis", "Colbert", "Dagobert", "Dalbert", "Dale", "Derek", "Dewitt", "Dian", "Dieter", "Dietrich", "Dolf", "Drake", "Dutch", "Eberhard", "Egmont", "Elbert", "Emery", "Ethelred", "Everett", "Falk", "Ferdinand", " Franz", "Frederick", "Fremont", "Fritz", "Gary", "Geert", "Geoffrey", "Gerlac", "Gilbert", "Godfrey", "Hagan", "Hahn", "Hammet", "Harbin", "Harlan", "Harry", "Heinrich", "Heller", "Henry", "Herbert", "Herman", "Hernan", "Hershel", "Hildebrand", "Hobart", "Horst", "Hubert", "Hugh", "Humbert", "Huni", "Hutch", "Ing", "Ingram", "Ivo", "Jerry", "Kagan", "Kant", "Karcher", "Karl", "Kasch", "Kass", "Kearn", "Kellen", "Kepler", "Kiefer", "Klaus", "Klein", "Konrad", "Kurt", "Lance", " Lando", "Lang", "Lear", "Len", "Leonard", "Lindberg", "Loring", "Louis", "Ludwig", "Luther", "Lyulf", "Mallory", "Mandel", "Manfred", "Mathias", "Meyer", "Miles", "Milo", "Nevin", "Norbert", "Oberon", "Obert", "Odette", "Odis", "Orlan", "Ormand", "Ormanda", "Osborn", "Osten", "Otis", "Otto", "Paulos", "Penrod", "Rainart", "Redmond", "Reinhart", "Reinhold", "Rikard", "Ring", "Ritter", "Roderick", "Roger", "Roland", "Rolf", "Rollins", "Ross", "Roswald", "Roth", "Rudeger", "Rudolph", " Rune", "Schaffer", "Schmidt", "Schneider", "Sinbad", "Stark", "Stefan", "Stein", "Strom", "Tab", "Theobold", "Tyson", "Uben", "Uberto", "Ubrig", "Ubrigens", "Uhr", "Ulas", "Ulbrecht", "Ulbrich", "Ulexite", "Ulgar", "Ulman", "Ulriah", "Ulrich", "Unser", "Uwe", "Vaduz", "Valdermar", "Varick", "Varner", "Verile", "Verner", "Vid", "Vilem", "Vilmos", "Volker", "Waggoner", "Wagner", "Walbert", "Waldemar", "Waldron", "Walmond", "Walten", "Walter", "Waltraut", "Warner", "Warren", "Wes", "Wilbert", "Willis", "Wilmer", "Wilson", "Winfield", "Yale", "Yohann", "Zamael", "Zelig"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::greekGivenNamesMale() const
{

    vector<string> names = { "Achilles", "Adonis", "Adrian", "Agamemnon", "Ajax", "Alcander", "Alcibiades", "Alexander", "Altair", "Amar", "Ambrose", "Anacletus", "Anastasius", "Anatole", "Andrew", "Andromeda", "Anker", "Anstice", "Antenor", "Anthony", "Antigonus", "Apollo", "Apostolos", "Archelaus", "Archimedes", "Ares", "Argus", "Arion", "Aristide", "Arsenio", "Asmodel", "Aster", "Athan", "Athanasios", "Athos", "Atlas", "Autolocus", "Avel", "Baptiste", "Basil", "Bates", "Bemus", "Bishop", "Caesar", "Callistus", "Cancer", "Carsten", "Castor", "Centaurus", "Charon", " Chiron", "Christian", "Christopher", "Claus", "Cleon", "Coeus", "Cohn", "Colin", "Corydon", "Cosimo", "Cronus", "Cyd", "Cyril", "Damasus", "Damien", "Dard", "Darius", "Deacon", "Deion", "Demetrius", "Dennis", "Deo", "Diomedes", "Dionysus", "Dooley", "Doran", "Dorian", "Elie", "Eneas", "Erastus", "Eris", "Eros", "Euclid", "Eugene", "Eustace", "Evagelos", "Evangelista", "Flavian", "Galen", "Gelasius", "Geode", "Geordi", "George", "Giles", "Goran", "Greer", "Gregory", "Hadrian", "Hamon", "Harmon", " Hector", "Helios", "Hephaestus", "Hercules", "Hermes", "Hieronymus", "Hipparchus", "Hippias", "Hippocrates", "Homer", "Horace", "Hydrus", "Hyginus", "Hypnos", "Iakobos", "Icarus", "Ilias", "Indigo", "Ioan", "Jace", "Jason", "Kai", "Kalin", "Kallen", "Karey", "Karsten", "Kirill", "Kit", "Konstantinos", "Kosmo", "Kozma", "Krischnan", "Kristoffer", "Kyros", "Laertes", "Leander", "Leon", "Leonidas", "Linus", "Loikanos", "Lucas", "Lykaios", "Lysander", "Marinos", "Mateo", "Melancton", "Melun", "Mete", "Momus", "Morpheus", " Myles", "Myron", "Narcissus", "Nectarios", "Nektarios", "Neo", "Nereus", "Nestor", "Nicholas", "Nicodemus", "Nike", "Nikos", "Obelia", "Obelix", "Ocean", "Oceana", "Odea", "Odele", "Odessa", "Odette", "Odysseus", "Olympia", "Omega", "Orea", "Orestes", "Orion", "Orrin", "Osanna", "Osias", "Otis", "Panos", "Panthea", "Paris", "Patroclus", "Peder", "Pello", "Pericles", "Perseus", "Philander", "Philemon", "Philip", "Philo", "Philostrate", "Philotus", "Phoenix", "Plato", "Platon", "Pluto", "Plutus", "Poseidon", " Priam", "Prometheus", "Proteus", "Ptolemy", "Rastus", "Rhodes", "Sesame", "Simonides", "Sisyphus", "Socrates", "Sofronio", "Solinus", "Soteria", "Soterios", "Spiridon", "Stamos", "Stavros", "Stephen", "Strom", "Talos", "Tansy", "Tarasios", "Thanos", "Theodore", "Theophilus", "Theron", "Thomas", "Tibalt", "Timeus", "Timoleon", "Timon", "Timothy", "Titus", "Tony", "Tracy", "Tymon", "Tyrone", "Uranus", "Urian", "Urien", "Vander", "Vasilios", "Vitaly", "Vitas", "Vivar", "Volney", "Xanthus", "Xeno", "Xenophon", "Xerarch", " Xuthus", "Xylo", "Xylon", "Xyst", "Xystum", "Xystus", "Yannis", "Yuri", "Zale", "Zander", "Zefirino", "Zendo", "Zeno", "Zenobio", "Zenos", "Zephyr", "Zero", "Zeth", "Zeus", "Zoello", "Zorba", "Zosimo", "Zowie"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}



vector<string> MaleNameGiven::hawaiianGivenNamesMale() const
{

    vector<string> names = { "Akamu", "Analu", "Aulii", "Bane", "Eowyn", "Havika", "Kahale", "Kahanu", "Kahoku", "Kaholo", "Kai", "Kaikeapona", "Kaipo", "Kalama", "Kale", "Kalei", "Kaleo", "Kalepa", "Kana", "Kane", "Kanoa", "Kapono", "Keahi", "Keanu", "Kekoa", "Kelii", "Keona", "Kepano", "Konala", "Laakea", "Laionela", "Loe", "Lono", "Lulani", "Maik", "Makaio", "Makan", "Malo", "Manu", "Mauli", "Meka", "Moke", "Nahele", "Nalani", "Okalani", "Oke", "Okelani", "Oliana", "Onaona", "Palani", "Pekelo", "Uleki"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::hebrewGivenNamesMale() const
{

    vector<string> names = { "Aaron", "Abbas", "Abdiel", "Abel", "Abijah", "Abner", "Abraham", "Abrahsa", "Absolom", "Acacio", "Adalai", "Adam", "Adar", "Addai", "Adin", "Adley", "Admon", "Adon", "Agrippa", "Ahab", "Ahmik", "Aitan", "Akim", "Alphaeus", "Alphus", "Alva", "Amal", "Amiel", "Amon", "Amos", "Amram", "Anath", "Annas", "Arel", "Arion", "Aristotle", "Arnon", "Asa", "Asher", "Asphar", "Azariah", "Barbaras", "Barnabas", "Bartholomew", "Baruch", "Bates", "Bela", "Benaiah", "Benjamin", "Benson", "Bethuel", "Boaz", "Cain", "Caleb", "Carmelo", "Carpus", "Chaim", "Chatan", "Dagan", "Dalit", "Daniel", "David", "Dekel", "Dov", "Eben", "Ebner", "Eden", "Edom", "Ehud", "Eisig", "Eitan", "Elam", "Elan", "Elazar", "Elias", "Elijah", "Eliot", "Elkanah", "Emanuel", "Enoch", "Ephraim", "Eran", "Esau", "Ezekiel", "Ezra", "Gabai", "Gabriel", "Gan", "Gatian", "Genesis", "Gersham", "Giacomo", "Gian", "Giannes", "Gideon", "Giuseppe", "Goliath", "Haggai", "Haran", "Heber", "Heinz", "Hezekiah", "Hilel", "Hiram", "Hosea", "Hyman", "Ichabod", "Ike", "Ilan", "Ilia", "Ilias", "Immanuel", "Imre", "Ioan", "Ira", "Irin", "Isaac", "Isaiah", "Ishmael", "Israel", "Ithamar", "Jabez", "Jabin", "Jachin", "Jacob", "Jaden", "Jairus", "James", "Japhet", "Jared", "Jaron", "Javan", "Jebediah", "Jeremiah", "Jeremy", "Jesse", "Jesus", "Jethro", "Joachim", "Job", "Jody", "Joel", "John", "Jonas", "Jonathan", "Joram", "Jordan", "Joseph", "Joshua", "Juan", "Judd", "Kabos", "Kadmiel", "Kaniel", "Karmel", "Katzir", "Kedar", "Kenan", "Kobe", "Laban", "Label", "Lael", "Lavan", "Lazarus", "Lemuel", "Leor", "Leshem", "Levi", "Lot", "Madai", "Makayla", "Makis", "Malachi", "Mario", "Marlin", "Matai", "Matthew", "Mattison", "Mayer", "Mehetabel", "Meshach", "Mica", "Michael", "Mihaly", "Mordecai", "Moses", "Nachman", "Nachmanke", "Nachum", "Nadav", "Nadir", "Nahir", "Nahum", "Nathaniel", "Naum", "Nehemiah", "Nimrod", "Nirel", "Nisi", "Noadiah", "Noah", "Noy", "Nuriel", "Obadiah", "Oded", "Oma", "Omar", "Omri", "Oralee", "Oren", "Orli", "Orly", "Ornice", "Osaze", "Osip", "Oz", "Pallu", "Palti", "Pau", "Phinneaus", "Pontus", "Rafa", "Rafael", "Ranen", "Raphael", "Ravid", "Reuben", "Reuel", "Rishon", "Roman", "Roni", "Rouvin", "Ruben", "Saad", "Sachiel", "Sagiv", "Saloman", "Sam", "Samson", "Samuel", "Saul", "Seff", "Seraphim", "Seth", "Shafir", "Shailen", "Shiloh", "Shimon", "Shulamith", "Shylock", "Simon", "Simpson", "Sivan", "Solomon", "Talman", "Temani", "Temo", "Terach", "Timur", "Tivon", "Tobias", "Tomer", "Tov", "Tuvya", "Tyrek", "Tzuriel", "Udeh", "Uehudah", "Uri", "Urias", "Ury", "Uzi", "Uziah", "Uziel", "Vered", "Vida", "Volf", "Yaakov", "Yaar", "Yadon", "Yago", "Yahir", "Yair", "Yakim", "Yakov", "Yamin", "Yan", "Yanis", "Yanoach", "Yaphet", "Yarin", "Yechezkel", "Yehudi", "Yered", "Yeshaya", "Yitro", "Yitzchak", "Yonas", "Yonatan", "Yosef", "Yuval", "Zabulon", "Zaccheo", "Zachary", "Zahavi", "Zakai", "Zakur", "Zamir", "Zan", "Zane", "Zann", "Zared", "Zavad", "Zayden", "Zazu", "Zebediah", "Zebulon", "Zedekiah", "Zenoa", "Zephan", "Zev", "Ziff", "Zion", "Ziph", "Ziv", "Zomier", "Zuriel", "Zurl"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}



vector<string> MaleNameGiven::hindiGivenNamesMale() const
{

    vector<string> names = { "Abhay", "Abhijit", "Achuta", "Aditya", "Ahura", "Ajatashatru", "Ajay", "Akaash", "Akshay", "Alam", "Amit", "Anand", "Ananias", "Anay", "Anoop", "Aseem", "Asija", "Asuman", "Asvin", "Atharvan", "Atul", "Badal", "Bala", "Balaji", "Balavan", "Baldev", "Balin", "Banke", "Bharat", "Bhudev", "Bramha", "Bukka", "Chandra", "Dattatreya", "Deepak", "Devarsi", "Dhananjay", "Dharuna", "Dhatri", "Dilip", "Dinesh", "Duranjaya", "Durjaya", "Eknath", "Feroz", "Gajendra", "Ganesh", "Girish", "Gopal", "Hannes", "Hari", "Harshul", "Hitesh", "Inder", "Iravan", "Ishan", "Jaideep", "Jalal", "Jayant", "Jeevan", "Jitendra", "Kabir", "Kabr", "Kala", "Kalidas", "Kalkin", "Kalpanath", "Kamadev", "Kamlesh", "Kanak", "Kanan", "Kapil", "Kartik", "Kartikeya", "Kaushal", "Kaushik", "Kavi", "Kedar", "Keshav", "Ketan", "Khadim", "Khyber", "Kintan", "Kirit", "Kishore", "Kripa", "Krunal", "Kuldeep", "Kulvir", "Kunal", "Kusagra", "Kush", "Kushan", "Lakshman", "Lakshmi", "Lakshya", "Lalit", "Lavesh", "Lokesh", "Madan", "Madhav", "Mahabala", "Mahavira", "Mahesh", "Maitreya", "Manavendra", "Mandar", "Mandhatri", "Manik", "Manish", "Manmohan", "Manoj", "Mansukh", "Manu", "Markandeya", "Matanga", "Mayon", "Mehdi", "Mehul", "Mihir", "Milind", "Minesh", "Mitali", "Mitesh", "Mohan", "Mohin", "Mohit", "Mukta", "Mukul", "Mukunda", "Nabendu", "Nachiketa", "Nadim", "Nagesh", "Naimish", "Nakul", "Nalan", "Namdev", "Nandin", "Narayana", "Naresh", "Narsi", "Nartana", "Naveen", "Nayan", "Nihar", "Nilay", "Nimai", "Nimesh", "Niraj", "Niramitra", "Niranjan", "Nirav", "Nishad", "Nitesh", "Nitya-Sundara", "Noor", "Ojal", "Omana", "Omarjeet", "Pallav", "Pandita", "Pandya", "Pankaj", "Parag", "Paramartha", "Paras", "Parth", "Piyush", "Prabhakar", "Prabhu", "Pradeep", "Prakash", "Pramsu", "Pranav", "Pranay", "Prasata", "Prassana", "Pratap", "Pratik", "Pratyush", "Praveen", "Pravin", "Prem", "Prithu", "Privrata", "Pundarik", "Purujit", "Pusan", "Qimat", "Ragin", "Rahul", "Raivata", "Raj", "Rajanikant", "Rajendra", "Rajesh", "Rajiv", "Rakesh", "Ram", "Raman", "Ramanuja", "Ramesh", "Ranjan", "Ranjeet", "Ranjit", "Rantidev", "Ratri", "Ravi", "Ravindra", "Rikin", "Rishab", "Rishi", "Rizal", "Rohan", "Rohit", "Ronak", "Roshan", "Ruchir", "Rupesh", "Saarik", "Sachchit", "Sachin", "Sagar", "Sahadev", "Sahen", "Sahib", "Samir", "Sampath", "Samudra", "Sanat", "Sandeep", "Sanjay", "Sanjeev", "Sanjog", "Sankara", "Santosh", "Sapan", "Sarasvan", "Sarat", "Sarngin", "Sarojin", "Saswata", "Satayu", "Satrujit", "Satyen", "Saudeep", "Saunak", "Saurabh", "Senajit", "Shailesh", "Shalabh", "Shalin", "Shankar", "Shantanu", "Sharad", "Shashi", "Shashwat", "Shishir", "Shiv", "Shivendu", "Shyam", "Singh", "Snehal", "Soham", "Srijan", "Srikant", "Srinath", "Srinivas", "Sriram", "Sudarshan", "Sudesha", "Sudeva", "Sudhansu", "Sudhir", "Sukarman", "Sukumar", "Sumadhur", "Sumantu", "Sumati", "Sumit", "Sundara", "Sunil", "Suresh", "Surya", "Suvrata", "Swapnil", "Taksa", "Talor", "Tapan", "Tarun", "Tej", "Thaman", "Tilak", "Trisanu", "Tushar", "Udai", "Udit", "Ujala", "Umed", "Upendra", "Urjavaha", "Urvil", "Uttam", "Vadin", "Vaibhav", "Vairaja", "Valin", "Valmihi", "Vandan", "Vaninadh", "Vardhamma", "Varen", "Varesh", "Variya", "Varma", "Varun", "Vasant", "Vasava", "Vasin", "Vasudev", "Vasuman", "Vedanga", "Veer", "Vidvan", "Vihs", "Vijay", "Vijayendra", "Vikas", "Vikesh", "Vikram", "Vikrant", "Vimal", "Vinay", "Vineet", "Vinod", "Vipul", "Viraj", "Virat", "Vishal", "Visvajit", "Visvakarman", "Visvayu", "Viswanath", "Vivatma", "Vivek", "Waman", "Yamal", "Yash", "Yashodhara", "Yashovarman", "Yashpal", "Yauvani", "Yogendra", "Yogesh", "Yudhajit"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}



vector<string> MaleNameGiven::hungarianGivenNamesMale() const
{

    vector<string> names = { "Atilla", "Dezso", "Dorjan", "Ervin", "Gedeon", "Gerson", "Kada", "Kalman", "Kaplony", "Kapolcs", "Kardos", "Karsa", "Kartal", "Keled", "Keleman", "Kemenes", "Kende", "Kerecsen", "Keve", "Kinga", "Kolos", "Kont", "Kund", "Laborc", "Ladom�r", "Lantos", "L�szl�", "Lehel", "L�l", "Levente", "Lip�t", "Lor�nd", "L�rinc", "Med�rd", "Megyer", "Menyh�rt", "Miksa", "Mil�n", "M�r", "N�ndor", "Ny�k", "Odon", "Oguz", "Ond", "Onelia", "Orb�n", "�rk�ny", "Ormos", "�rs", "Oszl�r", "Ozor", "�zs�b", "Ozsv�t", "P�zm�n", "Pellegrin", "Pentele", "Piusz", "Pongor", "Radom�r", "Reg�", "Rendor", "Rezs�", "Robi", "R�kus", "Sandor", "Sebes", "Solt", "S�lyom", "Soma", "Sur�ny", "Szabolcs", "Szal�k", "Szemere", "Szerv�c", "Szesc�", "Szev�r", "Tabor", "Taksony", "Tardos", "Tarj�n", "Tas", "T�t�ny", "Tiham�r", "Titusz", "Tivadar", "Tomaj", "Ubul", "Ugod", "Ugor", "Uros", "Uzor", "V�rkony", "Vayk", "Vidor", "Vit�z", "Z�dor", "Zajzon", "Zal�n", "Z�mor", "Zar�nd", "Zek�", "Zerind", "Z�t�ny", "Zobor", "Zolt�n", "Zombor", "Zsigmond", "Zsolt"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}



vector<string> MaleNameGiven::indianGivenNamesMale() const
{

    vector<string> names = { "Kers", "Mog", "Omprakash", "Prabodh", "Praful", "Som"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::irishGivenNamesMale() const
{

    vector<string> names = { "Aban", "Adan", "Adare", "Aeary", "Avonmore", "Bain", "Bairre", "Ballinamore", "Banagher", "Barry", "Beacan", "Benen", "Bevin", "Blaan", "Blaine", "Blair", "Boyd", "Braden", "Bram", "Brett", "Brian", "Buzz", "Caedmon", "Caelan", "Calder", "Calhoun", "Campbell", "Canice", "Carden", "Carey", "Carlow", "Carrick", "Ciaran", "Clancy", "Colin", "Colm", "Conall", "Conner", "Cormack", "Craig", "Cullen", "Curan", "Cuyler", "Dacian", "Dailan", "Daire", "Dallas", "Dallin", "Darby", "Darcy", "Aban", "Adan", "Adare", "Aeary", "Avonmore", "Bain", "Bairre", "Ballinamore", "Banagher", "Barry", "Beacan", "Benen", "Bevin", "Blaan", "Blaine", "Blair", "Boyd", "Braden", "Bram", "Brett", "Brian", "Buzz", "Caedmon", "Caelan", "Calder", "Calhoun", "Campbell", "Canice", "Carden", "Carey", "Carlow", "Carrick", "Ciaran", "Clancy", "Colin", "Colm", "Conall", "Conner", "Cormack", "Craig", "Cullen", "Curan", "Cuyler", "Dacian", "Dailan", "Daire", "Dallas", "Dallin", "Delano", "Dempsey", "Dermot", "Deshawn", "Devlin", "Devon", "Dewayne", "Dillon", "Donnelly", "Doran", "Druce", "Drystan", "Duane", "Duer", "Eachan", "Eamon", "Earc", "Egan", "Elgin", "Eman", "Evan", "Fergus", "Finnegan", "Finnian", "Flannery", "Flynn", "Gallagher", "Galvin", "Gannon", "Glen", "Gorman", "Guthrie", "Hagan", "Harkin", "Hennessy", "Hogan", "Hurley", "Inerney", "Innis", "Kadi", "Kaelan", "Kailin", "Kane", "Karney", "Kasey", "Kassidy", "Kavan", "Kaylen", "Kayven", "Keeley", "Keith", "Kelan", "Kellen", "Kelly", "Kelton", "Kelvin", "Kem", "Kendrick", "Kenneth", "Keon", "Kerwin", "Kesley", "Kian", "Killian", "Konnor", "Korey", "Kyle", "Kyler", "Labhras", "Lanty", "Larkin", "Laserian", "Laughlin", "Liam", "Loaghaire", "Lorcan", "Lucan", "Lunn", "Lynch", "Macartan", "Mackinley", "Maclean", "Macmorris", "Magee", "Maguire", "Mallow", "Maloney", "Mayo", "Mcauliffe", "McCoy", "Meallan", "Merrill", "Mickey", "Miles", "Mohanan", "Monroe", "Morgan", "Moriarty", "Murphy", "Myles", "Neil", "Neilan", "Nevan", "Nevin", "Nolan", "Odell", "Odhran", "Odran", "Oisin", "Oistin", "Oma", "Oona", "Oran", "Orane", "Ossian", "Owen", "Paddy", "Padraig", "Peyton", "Pierson", "Quigley", "Quillan", "Quinlan", "Quinn", "Rafferty", "Raghnall", "Reagan", "Rian", "Roan", "Roarke", "Rohan", "Ryons", "Scanlon", "Shamus", "Shane", "Shannon", "Shaun", "Shea", "Sheridon", "Sherrick", "Sivney", "Siward", "Somerly", "Teague", "Torrance", "Tracy", "Trevor", "Ualtar", "Uilleach", "Uilleam", "Uilleac", "Uilioc", "Uilliog", "Uillyog"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::italianGivenNamesMale() const
{

    vector<string> names = { "Agatho", "Amedeo", "Amerigo", "Aretino", "Arrigo", "Attilio", "Benvenuto", "Biondello", "Borachio", "Braulio", "Bronze", "Cajetan", "Carmelo", "Carmine", "Celesto", "Cirrillo", "Constanzo", "Corrado", "Demarco", "Deusdedit", "Donato", "Donus", "Eriberto", "Ermanno", "Ettore", "Falito", "Fiorello", "Flavio", "Fleance", "Floritzel", "Fortino", "Galileo", "Genovese", "Giancarlo", "Gianni", "Gino", "Gioacchino", "Giovanni", "Gratiano", "Honorius", "Hormisdas", "Hortensio", "Indro", "Lombardi", "Marco", "Mariano", "Martino", "Massimo", "Maurizio", "Maury", "Mercury", "Messala", "Michelangelo", "Napoleon", "Nek", "Nino", "Nuncio", "Othello", "Paco", "Pancrazio", "Paolo", "Paris", "Philario", "Pino", "Pisano", "Primo", "Proculeius", "Rocco", "Romeo", "Ruggerio", "Santo", "Saverio", "Silvano", "Solanio", "Taddeo", "Tancredo", "Ugo", "Umberto", "Venezio", "Venturo", "Vesuvio", "Vitalian", "Vittorio", "Zanebono", "Zanipolo"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::japaneseGivenNamesMale() const
{

    vector<string> names = { "Akira", "Banko", "Banzan", "Bassui", "Benjiro", "Botan", "Chimon", "Chotan", "Dai", "Dai-In", "Daido", "Doryo", "Engu", "Enki", "Enmei", "Eryu", "Fudoki", "Fujita", "Genko", "Goro", "Hakaku", "Haru", "Hideaki", "Hiromasa", "Hiroshi", "Hisoka", "Hoshi", "Iachima", "Itsu", "Jikai", "Jiro", "Jiryu", "Joben", "Joji", "Jomei", "Junichiro", "Kado", "Kaisha", "Kakumyo", "Kanaye", "Kando", "Kane", "Kaori", "Kazuo", "Keitaro", "Kentaro", "Kin", "Kishi", "Kisho", "Kiyoshi", " Kogen", "Koichi", "Kozan", "Makoto", "Mamoru", "Manzo", "Mareo", "Maro", "Masahiro", "Masakazu", "Masao", "Masato", "Masatoshi", "Michio", "Minoru", "Montaro", "Morio", "Mu-nan", "Mugen", "Nan Shin", "Naoko", "Oki", "Raidon", "Rei", "Ringo", "Roka", "Ronin", "Ryogi", "Ryoichi", "Ryozo", "Ryuichi", "Saburo", "Seiichi", "Seiko", "Senichi", "Shinichi", "Shiro", "Shoichi", "Shuichi", "Shunichi", "Takeshi", "Taku", "Taro", "Tomo", "Toyo", "Unkan", "Usaku", "Washi", "Yasahiro", "Yasashiku", "Yasuo", "Yemon", "Yogi", "Yoshi", "Yoshifumi", "Yukio", "Yutaka", "Zen"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::koreanGivenNamesMale() const
{

    vector<string> names = { "Daeshim", "Jintao", "Seung", "Yong-Sun", "Young-Ja", "Young-Jae"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::latinGivenNamesMale() const
{

    vector<string> names = { "Ace", "Adeodatus", "Adrian", "Aemilius", "Africa", "Alban", "Aleron", "Amadeus", "Amando", "Amator", "Ames", "Amory", "Anthony", "Aquarius", "Aquila", "Arcadicus", "Archangelo", "Arden", "Aruiragus", "Atticus", "Auburn", "August", "Aurelius", "Auriga", "Austin", "Avis", "Barber", "Benedict", "Bennett", "Benvolio", "Blaze", "Boone", "Branch", "Caelum", "Caesar", "Caius", "Callistus", "Calvin", "Camillo", "Candidius", "Capricornus", "Capucius", "Carew", "Carnelian", "Cassius", "Cato", "Celesto", "Cepheus", "Cetus", "Chester", " Cicero", "Clarence", "Claude", "Clement", "Constantine", "Cooper", "Cordell", "Corin", "Cornelius", "Corvus", "Costante", "Crispin", "Cupid", "Curtis", "Cygnus", "Dacian", "Dante", "Decretas", "Delmore", "Desmond", "Dexter", "Dominick", "Domitus", "Donato", "Drake", "Duke", "Durand", "Eleutherius", "Ellery", "Emile", "Equinox", "Eridanus", "Estes", "Ethan", "Eusebius", "Evaristus", "Ezio", "Fabian", "Fabrizio", "Farrar", "Felix", "Ferris", "Feste", "Flavius", "Florian", "Formosus", "Furio", "Galloway", "Garner", "Gemini", " Gennaro", "Germanus", "Grady", "Graham", "Griffin", "Guiderius", "Harmon", "Hiemo", "Hilario", "Honorius", "Horace", "Hortensio", "Horton", "Iago", "Ignatius", "Innocent", "Janus", "Jarlath", "Javan", "Jermyn", "Jerome", "Julian", "Junius", "Kalvin", "Kasen", "Klemens", "Korvin", "Labhras", "Lamar", "Lamberto", "Laurence", "Lawrence", "Lester", "Levente", "Lionel", "Loren", "Lorne", "Lucas", "Lucian", "Lucius", "Lyon", "Mace", "Magic", "Magnus", "Major", "Malchidiel", "Mamillius", "Mar", "Marcade", "Marcellus", " March", "Marcus", "Margarelon", "Marinus", "Marius", "Mark", "Mars", "Martius", "Maurice", "Max", "Maxwell", "Mayer", "Mercury", "Merit", "Meriweather", "Mica", "Miner", "Montano", "Morris", "Myles", "Narciso", "Nemo", "Neptune", "Nero", "Nigel", "Nimbus", "Noble", "Nona", "Octavius", "Odina", "Oistin", "Oliver", "Oral", "Orde", "Orelious", "Oria", "Orien", "Oriole", "Orlando", "Osma", "Ovid", "Pandarus", "Patrick", "Paul", "Peace", "Pelagius", "Peregrin", "Peril", "Peter", "Philo", " Placido", "Platinum", "Pontius", "Prince", "Prosper", "Pryor", "Quade", "Quant", "Quentin", "Quirinus", "Rainier", "Ransom", "Regis", "Remus", "Renee", "Rex", "Roman", "Rufus", "Sabene", "Sabinian", "Sagittarius", "Saturn", "Sebastian", "Seleucus", "Sempronius", "Septimus", "Serge", "Severinus", "Sextus", "Silas", "Silvester", "Silvio", "Silvius", "Sol", "Solan", "Sparky", "Stacey", "Stanislaw", "Taurin", "Terence", "Thaddeaus", "Tony", "Tracy", "Trent", "Trenus", "Ulices", "Ulises", "Ulysses", "Unus", "Urban", " Ursan", "Val", "Valentin", "Valentine", "Valerian", "Valor", "Varrius", "Vergel", "Verlin", "Vern", "Vernon", "Vertumnus", "Vester", "Victor", "Vida", "Vigilius", "Vincent", "Vinson", "Vireo", "Virgil", "Vito", "Vitus", "Zachriel", "Zaniel", "Zanobi", "Zazel"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::middleEnglishGivenNamesMale() const
{

    vector<string> names = { "Alden", "Alder", "Crockett", "Kemp", "Kipling", "Ladd", "Lander", "Lane", "Latimer", "Lyman", "Macon", "Mendel", "Mercer", "Mull", "Nye", "Perry", "Prentice", "Reeve", "Sanders", "Sawyer", "Skeet", "Sterne", "Swain", "Taylor", "Tennyson", "Todd", "Trey", "Tucker", "Turner", "Twain", "Tyler", "Vance", "Vane", "Wade", "Walker", "Yates"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::nativeAmericanGivenNamesMale() const
{

    vector<string> names = { "Achachak", "Adahy", "Ahanu", "Akecheta", "Alo", "Apenimon", "Ashkii", "Atohi", "Bemossed", "Bidziil", "Chatam", "Chesmu", "Cheveyo", "Cheyenne", "Chogan", "Ciqala", "Cochise", "Colville", "Dakota", "Dichali", "Dyami", "Elan", "Elsu", "Enapay", "Etchemin", "Etu", "Gad", "Gawonii", "Gosheven", "Hania", "Helaku", "Hiamovi", "Hinto", "Holata", "Honovi", "Huritt", "Illanipi", "Jacy", "Kaga", "Kai", "Kele", "Kiyiyah", "Knoton", "Kohana", "Koi", "Lakota", "Lallo", "Lansa", "Len", "Lenno", "Lokni", "Lonato", "Mahkah", "Mahpee", "Maska", "Mikasi", "Misu", "Mohe", "Mojag", "Motega", "Mukki", "Nashoba", "Nebraska", "Nigan", "Nikan", "Nitis", "Nocona", "Nodin", "Odakota", "Ogima", "Ohanzee", "Ohio", "Olathe", "Omaha", "Onawa", "Oneida", "Oni", "Onida", "Opa", "Oya", "Paco", "Pallaton", "Patamon", "Patwin", "Paytah", "Pilan", "Powa", "Quanah", "Qued", "Quelatikan", "Qunnoune", "Rowtag", "Sahale", "Sakima", "Shaman", "Shilah", "Taimah", "Tansy", "Tate", "Tennessee", "Thaonawyuthe", "Tyee", "Uhubitu", "Unaduti", "Unkas", "Utatci", "Waban", "Wahid", "Wamblee", "Wapi", "Wicasa", "Wohehiv", "Wuyi", "Wynono", "Wyome", "Yahto", "Yancy", "Yas", "Yotimo", "Yottoko", "Youkioma", "Yuma", "Yutu", "Zitkaduta"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::norseGivenNamesMale() const
{

    vector<string> names = { "Balder", "Dana", "Freyr", "Gareth", "Haldor", "Hardicanute", "Hogarth", "Holm", "Hsin", "Hume", "Kelby", "Ker", "Lamont", "Magne", "Oda", "Oddvar", "Odin", "Ove", "Quimby", "Ragnar", "Sutherland", "Terje", "Thurston", "Ulfred", "Unni", "Volund", "Yongvar"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::oldEnglishGivenNamesMale() const
{

    vector<string> names = { "Ackley", "Acton", "Addison", "Adger", "Aiken", "Alcott", "Alder", "Aldrich", "Alfred", "Allard", "Allston", "Alton", "Alvertos", "Alvin", "Arledge", "Arley", "Arlo", "Armstrong", "Arundel", "Ashley", "Athelstan", "Averill", "Awarnach", "Ballard", "Bancroft", "Barclay", "Barnett", "Beacher", "Beardsley", "Bede", "Beldon", "Bentley", "Birch", "Blake", "Booker", "Booth", "Borden", "Bradley", "Brandon", "Brent", "Brewster", "Brigham", "Brinley", "Brock", "Bromley", "Brook", "Buckley", "Bud", "Burgess", "Burne", " Burt", "Buster", "Cade", "Calder", "Caldwell", "Calhoun", "Calvert", "Cameron", "Carden", "Carleton", "Carlyle", "Carter", "Carvell", "Catcher", "Cedric", "Chad", "Channing", "Charles", "Chevy", "Chilton", "Claiborne", "Clark", "Cleveland", "Clifford", "Colbert", "Colborn", "Colter", "Cooper", "Copper", "Courtland", "Crawford", "Creighton", "Cromwell", "Currier", "Dale", "Darren", "Darwin", "Dayton", "Dean", "Digby", "Donald", "Dorset", "Douglas", "Dover", "Doyle", "Dudley", "Duncan", "Durward", "Dustin", "Dwight", " Earl", "Edgar", "Edmund", "Edsel", "Edward", "Edwin", "Egerton", "Elder", "Eldon", "Eldridge", "Elmer", "Elton", "Emerson", "Erskine", "Esmond", "Fairfax", "Farley", "Farrell", "Fielding", "Ford", "Fuller", "Fulton", "Gilford", "Goldman", "Gordon", "Gower", "Gray", "Hadden", "Hadley", "Hagley", "Halbert", "Haley", "Hall", "Hallam", "Halsey", "Hamilton", "Hannibal", "Hardy", "Harlan", "Harmon", "Harry", "Hastings", "Hawk", "Hawthorne", "Hayden", "Hayes", "Haywood", "Hedley", "Hendrick", "Henley", " Herbert", "Hilton", "Holden", "Hollis", "Horton", "Hudson", "Hulk", "Humphrey", "Hunt", "Hutton", "Hyatt", "Irving", "Ives", "Kenelm", "Kenley", "Kent", "Kenton", "Keyon", "Kim", "Kimberley", "King", "Kinsey", "Kipp", "Knox", "Landon", "Lang", "Lawson", "Layton", "Lee", "Legolas", "Leland", "Lincoln", "Lind", "Litton", "Llewellyn", "Lyndon", "Lyre", "Mace", "Madison", "Maitland", "Makepeace", "Manley", "Manning", "Marden", "Marlow", "Marsden", "Mather", "Mead", "Millard", "Miller", " Milton", "Morven", "Nash", "Nedes", "Nelson", "Newell", "Newman", "North", "Nyle", "Oakley", "Ogden", "Olin", "Orman", "Osbert", "Osmond", "Oswald", "Oswin", "Oxford", "Packard", "Palmer", "Parker", "Parr", "Payton", "Pell", "Penley", "Penn", "Pierson", "Preston", "Putnam", "Rabbit", "Radcliff", "Rae", "Raleigh", "Ralph", "Ramsey", "Ransford", "Ransley", "Ransom", "Raven", "Ravinger", "Rawlins", "Rayburn", "Raymond", "Read", "Redford", "Reginald", "Remington", "Rider", "Ridley", "Rigby", " Ripley", "Rishley", "Robert", "Rochester", "Rodman", "Rodney", "Rowan", "Rudyard", "Rutherford", "Rylan", "Sandon", "Sanford", "Scott", "Seabert", "Seward", "Shaw", "Shelley", "Shepherd", "Sherlock", "Sherman", "Sherwood", "Shipley", "Siddel", "Slade", "Snowden", "Speck", "Spencer", "Spike", "Stanley", "Stokley", "Stroud", "Studs", "Tanner", "Tate", "Terrel", "Thane", "Thatcher", "Thorne", "Thorpe", "Thurlow", "Tomkin", "Tostig", "Townsend", "Tranter", "Trent", "Tripp", "Truman", "Tye", "Tyne", "Wakefield", " Wallace", "Walton", "Washington", "Watson", "Waverly", "Wayland", "Wayne", "Webster", "Wells", "Wesley", "West", "Wetherby", "Wheaton", "Wheeler", "Whit", "Whitfield", "Wilfred", "Winifred", "Winslow", "Winston", "Winter", "Winthrop", "Woodrow", "Wright", "Wyatt", "Wylie", "Wyndam", "York"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::oldFrenchGivenNamesMale() const
{

    vector<string> names = { "Anicetus", "Bassett", "Bayard", "Bellamy", "Boden", "Borden", "Boswell", "Brigham", "Cable", "Chancellor", "Channing", "Chase", "Chivalry", "Corbin", "Curtis", "Darrell", "Flannery", "Fletcher", "Forrest", "Foster", "Francis", "Franklin", "Jay", "Jeffrey", "Justin", "Leroy", "Lyle", "Macy", "Marlon", "Maslin", "Oriel", "Percival", "Prewitt", "Quennel", "Roy", "Telo"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::oldGermanGivenNamesMale() const
{

    vector<string> names = { "Adalbert", "Adalgiso", "Adelbert", "Adelfried", "Adelino", "Adelmio", "Adelmo", "Ademaro", "Ahren", "Aksel", "Alfonso", "Alice", "Aloysius", "Anselm", "Blaz", "Carl", "Carolus", "Conrad", "Engelbert", "Ernest", "Hamlet", "Harold", "Harvey", "Jarvis", "Leopold", "Orlantha"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::oldNorseGivenNamesMale() const
{

    vector<string> names = { "Alvis", "Borg", "Gunnar", "Harper", "Kirk", "Leif", "Njord", "Olaf", "Oliver", "Oscar", "Ronald", "Roscoe", "Sigurd", "Sindri", "Skipp", "Thor", "Turpin"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::persianGivenNamesMale() const
{

    vector<string> names = { "Abtin", "Ardalan", "Atash", "Azar", "Bahram", "Behdad", "Behruz", "Bijan", "Borna", "Caspar", "Cyrus", "Dareh", "Darius", "Davood", "Eskander", "Fazel", "Firouz", "Gaspar", "Kaspar", "Kaveh", "Khorshed", "Khortdad", "Murdad", "Nard", "Persepolis", "Rashne", "Ruhollah", "Sarosh", "Siamak", "Xerxes"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::polishGivenNamesMale() const
{

    vector<string> names = { "Cerek", "Dobry", "Gerik", "Jacek", "Jarek", "Lech", "Ludoslaw", "Magnar", "Mandek", "Marcin", "Marek", "Nelek", "Olesia", "Ryzard", "Tanek", "Urjasz", "Waclaw", "Walenty", "Wlod", "Wojtek", "Zarek", "Zygmunt"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::polynesianGivenNamesMale() const
{

    vector<string> names = { "Kalani", "Lauaki", "Lisiate", "Uhila", "Ulani", "Vala", "Valu", "Vea"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::russianGivenNamesMale() const
{

    vector<string> names = { "Boris", "Dobry", "Dusan", "Egor", "Feodore", "Fyodor", "Gavrie", "Gleb", "Ivan", "Konstantin", "Kostas", "Kostya", "Lesta", "Magar", "Maksim", "Mikhail", "Miloslav", "Nikhil", "Oksana", "Olga", "Sacha", "Sarkis", "Semyon", "Sergei", "Timur", "Ulan", "Ustin", "Vadim", "Valeri", "Valerian", "Vanya", "Venedict", "Vladilen", "Vlas", "Wassily", "Xenik", "Yerik", "Yevgeni", "Yurchik", "Yuri"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::sanskritGivenNamesMale() const
{

    vector<string> names = { "Arjun", "Jackal", "Jafar", "Krishna", "Kumar", "Mahatma", "Nanda", "Nataraj", "Rajiv", "Uttam", "Vasu", "Veda", "Yogi"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::scandinavianGivenNamesMale() const
{

    vector<string> names = { "Amund", "Arvid", "Bjorn", "Canute", "Carolus", "Carson", "Dag", "Davin", "Denholm", "Dyre", "Egil", "Elvis", "Eric", "Filip", "Fortinbras", "Frey", "Haakon", "Hannes", "Igor", "Ingmar", "Ingvar", "Jarl", "Kaj", "Karr", "Kelsey", "Kerr", "Kettil", "Knute", "Kolby", "Lars", "Ludvig", "Lunt", "Mats", "Nels", "Niels", "Norb", "Odell", "Odo", "Olan", "Pal", "Quinby", "Rad", "Rune", "Skj�ld", "Snorre", "Steinar", "Stieran", "Sven", "S�lve", "Thiassi", "Thoralf", "Thorin", "Thorstein", "Toste", "Tryggvi", "Ulffr", "Ulick", "Ull", "Ulrik", "Ulster", "Ultar", "Vali", "Vannevar", "Vanslow", "Vidar", "Vidkun", "Viggo", "Viljalmr", "Viljo", "Von", "Waage", "Wray", "Zvi"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::scottishGivenNamesMale() const
{

    vector<string> names = { "Abhorson", "Adger", "Akira", "Alastair", "Athol", "Caithness", "Calen", "Camden", "Donalbain", "Drummond", "Duffy", "Edme", "Hamish", "Ian", "Kai", "Kameron", "Kane", "Keith", "Kelvin", "Kendrick", "Kenneth", "Kesley", "Kester", "Killian", "Kincaid", "Kyle", "Lachlan", "Laird", "Leith", "Lennox", "Leslie", "Logan", "Lundy", "Macbeth", "Macduff", "Mackinley", "Maclean", "Malcom", "Maxwell", "Mcaffie", "Mccauley", "McKinley", "Morrison", "Murdock", "Nairne", "Nolan", "Norval", "Ogilvy", "Oran", "Paden", "Polk", "Rab", "Rosling", "Ross", "Scully", "Stratton", "Tavis", "Teague", "Tearlach", "Tormod", "Tremayne", "Updike", "Wite"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::slavicGivenNamesMale() const
{

    vector<string> names = { "Casimir", "Duscha", "Evzen", "Gavril", "Ilie", "Jan", "Kostya", "Ludovic", "Mar�t", "Melik", "Mete", "Miroslav", "Mladen", "Oleg", "Ondrea", "Pavel", "Pavlos", "Pavo", "Peja", "Polixenes", "Polk", "Radman", "Reza", "Vaclav", "Vas", "Vencel", "Vlade", "Vladimir", "Volya", "Wenceslaus", "Wieslav", "Ziven", "Zorro", "Zorya", "Zydrunas"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::spanishGivenNamesMale() const
{

    vector<string> names = { "Agapetus", "Aimon", "Beltran", "Berto", "Bronco", "Cipriano", "Cisco", "Cortez", "Cruz", "Cuba", "Dario", "Desiderio", "Diego", "Dimos", "Fanuco", "Federico", "Fraco", "Francisco", "Frisco", "Gervasio", "Gig", "Gonzalo", "Guido", "Guillermo", "Hernan", "Hilario", "Ignado", "Isidro", "Jaguar", "Jair", "Javier", "Jerrold", "Juan", "Kiki", "Larenzo", "Lisandro", "Loredo", "Lorenzo", "Macario", "Malvolio", "Manuel", "Marjun", "Montana", "Montego", "Montel", "Montenegro", "Nasario", "Nemesio", "Neper", "Neron ", "Nicandro", "Noe", "Oihane", "Oleos", "Olindo", "Onofre", "Ora", "Oro", "Ovidio", "Pablo", "Paco", "Pancho", "Pedro", "Ponce", "Porfio", "Quico", "Quinto", "Quiqui", "Quito", "Reyes", "Reynaldo", "Rico", "Rio", "Rogelio", "Ryo", "Sagaz", "Salvador", "Santiago", "Saturnin", "Seferino", "Selestino", "Senon", "Sierra", "Tajo", "Urvano", "Vegas", "Venacio", "Vicente", "Vidal", "Xabat", "Xalvador", "Xaver", "Xaverius", "Xavier", "Xavion", "Xeres", "Ximen", "Zelipe", "Zenon"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::swahiliGivenNamesMale() const
{

    vector<string> names = { "Jabari", "Jelani", "Khairi", "Rashid"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::swedishGivenNamesMale() const
{

    vector<string> names = { "Anderson", "Axel", "Balder", "Beck", "Burr", "Fiske", "Gustave", "Per", "Staffan"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::teutonicGivenNamesMale() const
{

    vector<string> names = { "Kem", "Orinda", "Paxton", "Raeburn", "Renard", "Roald", "Sigfried", "Sigmund", "Stewart", "Theodoric", "Thierry", "Thurborn", "Udo", "Uland", "Ulf", "Walden", "Waldo", "Wendell", "Werner", "Wilbur", "Willard", "William", "Wolfgang", "Wolfram", "Yves"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::turkishGivenNamesMale() const
{

    vector<string> names = { "Berk", "Muzaffer", "Nedim", "Nesim", "Nesip", "Okan", "Olcay", "Onan", "Ozan", "Ozaner", "Sadi", "Safak", "Selim", "Semih", "Sencer", "Sevilin", "Sinan", "Taner", "Tarkan", "Tecer", "Tercan", "Tezer", "Tuncer", "Ufuk", "Ugur", "Ulucan", "Yigit", "Yucel", "Zafer", "Zeki", "Zeren"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::vietnameseGivenNamesMale() const
{

    vector<string> names = { "Chung", "Dong", "Duy", "Gan", "Keemo", "Lam", "Laman", "Long", "Phuoc", "Phuong", "Quan", "Quan Van", "Quang Tu", "Ritchell", "So", "Tai", "Thai", "Thong", "Tinh", "Tong", "Viet", "Vui", "Yen"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}

vector<string> MaleNameGiven::welshGivenNamesMale() const
{

    vector<string> names = { "Arthur", "Avon", "Baden", "Barry", "Bowen", "Bronwen", "Cade", "Cedric", "Clyde", "Conway", "Denzel", "Deverell", "Dewey", "Drew", "Dylan", "Emrick", "Floyd", "Fluellen", "Gavin", "Gawain", "Griffin", "Griffith", "Idris", "Kai", "Karey", "Kay", "Keith", "Kenn", "Kenrich", "Mabon", "Main", "Olwen", "Parry", "Pembroke", "Reese", "Rondell", "Sayer", "Sonnagh", "Tathal", "Tathan", "Teulyddog", "Tewdwr", "Trahaearn", "Tudfwlch", "Tudur", "Wren", "Ysgarran"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::yiddishGivenNamesMale() const
{

    vector<string> names = { "Gershon", "Lantz", "Zaide", "Zalman", "Zindel"
    };

    random_shuffle(names.begin(), names.end());

    return names;

}


vector<string> MaleNameGiven::getFirstName(int select) const
{
    vector<string> firstName;

    if (select == 1)
    {
        firstName = africanGivenNamesMale();
    }
    else if (select == 2)
    {
        firstName = africanAmericanGivenNamesMale();
    }
    else if (select == 3)
    {
        firstName = americanGivenNamesMale();
    }
    else if (select == 4)
    {
        firstName = arabicGivenNamesMale();
    }
    else if (select == 5)
    {
        firstName = armenianGivenNamesMale();
    }
    else if (select == 6)
    {
        firstName = celticGivenNamesMale();
    }
    else if (select == 7)
    {
        firstName = chineseGivenNamesMale();
    }
    else if (select == 8)
    {
        firstName = czechGivenNamesMale();
    }
    else if (select == 9)
    {
        firstName = danishGivenNamesMale();
    }
    else if (select == 10)
    {
        firstName = dutchGivenNamesMale();
    }
    else if (select == 11)
    {
        firstName = egyptianGivenNamesMale();
    }
    else if (select == 12)
    {
        firstName = englishGivenNamesMale();
    }
    else if (select == 13)
    {
        firstName = finnishGivenNamesMale();
    }
    else if (select == 14)
    {
        firstName = frenchGivenNamesMale();
    }
    else if (select == 15)
    {
        firstName = gaelicGivenNamesMale();
    }
    else if (select == 16)
    {
        firstName = germanGivenNamesMale();
    }
    else if (select == 17)
    {
        firstName = greekGivenNamesMale();
    }
    else if (select == 18)
    {
        firstName = hawaiianGivenNamesMale();
    }
    else if (select == 19)
    {
        firstName = hebrewGivenNamesMale();
    }
    else if (select == 20)
    {
        firstName = hindiGivenNamesMale();
    }
    else if (select == 21)
    {
        firstName = hungarianGivenNamesMale();
    }
    else if (select == 22)
    {
        firstName = indianGivenNamesMale();
    }
    else if (select == 23)
    {
        firstName = irishGivenNamesMale();
    }
    else if (select == 24)
    {
        firstName = italianGivenNamesMale();
    }
    else if (select == 25)
    {
        firstName = japaneseGivenNamesMale();
    }
    else if (select == 26)
    {
        firstName = koreanGivenNamesMale();
    }
    else if (select == 27)
    {
        firstName = latinGivenNamesMale();
    }
    else if (select == 28)
    {
       firstName = middleEnglishGivenNamesMale();
    }
    else if (select == 29)
    {
        firstName = nativeAmericanGivenNamesMale();
    }
    else if (select == 30)
    {
        firstName = norseGivenNamesMale();
    }
    else if (select == 31)
    {
        firstName = oldEnglishGivenNamesMale();
    }
    else if (select == 32)
    {
        firstName = oldFrenchGivenNamesMale();
    }
    else if (select == 33)
    {
        firstName = oldGermanGivenNamesMale();
    }
    else if (select == 34)
    {
        firstName = oldNorseGivenNamesMale();
    }
    else if (select == 35)
    {
        firstName = persianGivenNamesMale();
    }
    else if (select == 36)
    {
        firstName = polishGivenNamesMale();
    }
    else if (select == 37)
    {
        firstName = polynesianGivenNamesMale();
    }
    else if (select == 38)
    {
        firstName = russianGivenNamesMale();
    }
    else if (select == 39)
    {
        firstName = sanskritGivenNamesMale();
    }
    else if (select == 40)
    {
        firstName = scandinavianGivenNamesMale();
    }
    else if (select == 41)
    {
        firstName = scottishGivenNamesMale();
    }
    else if (select == 42)
    {
        firstName = slavicGivenNamesMale();
    }
    else if (select == 43)
    {
        firstName = spanishGivenNamesMale();
    }
    else if (select == 44)
    {
        firstName = swahiliGivenNamesMale();
    }
    else if (select == 45)
    {
        firstName = swedishGivenNamesMale();
    }
    else if (select == 46)
    {
        firstName = teutonicGivenNamesMale();
    }
    else if (select == 47)
    {
        firstName = turkishGivenNamesMale();
    }
    else if (select == 48)
    {
        firstName = vietnameseGivenNamesMale();
    }
    else if (select == 49)
    {
        firstName = welshGivenNamesMale();
    }
    else if (select == 50)
    {
        firstName = yiddishGivenNamesMale();
    }


    return firstName;
}
