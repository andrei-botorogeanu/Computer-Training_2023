
from summa import summarizer

def generate_summary(text):

    summary = summarizer.summarize(text)
    
    return summary

# Example text
input_text = """
A fost odată ca-n poveşti,
A fost ca niciodată.
Din rude mari împărăteşti,
O prea frumoasă fată.

Şi era una la părinţi
Şi mândră-n toate cele,
Cum e Fecioara între sfinţi
Şi luna între stele.

Din umbra falnicelor bolţi
Ea pasul şi-l îndreaptă
Lângă fereastră, unde-n colţ
Luceafărul aşteaptă.

Privea în zare cum pe mări
Răsare şi străluce,
Pe mişcătoarele cărări
Corăbii negre duce.

Îl vede azi, îl vede mâini,
Astfel dorinţa-i gata;
El iar, privind de săptămâni,
Îi cade draga fată.

Cum ea pe coate-şi răzima
Visând ale ei tâmple,
De dorul lui şi inima
Şi sufletu-i se împle.
Şi cât de viu s-aprinde el
În orişicare sară,
Spre umbra negrului castel
Când ea o să-i apară.

...

Şi pas cu pas pe urma ei
Alunecă-n odaie,
Ţesând cu recile-i scântei
O mreajă de văpaie.

Şi când în pat se-ntinde drept
Copila să se culce,
I-atinge mâinile pe piept,
I-nchide geana dulce;

Şi din oglindă luminiş
Pe trupu-i se revarsă,
Pe ochii mari, bătând închişi
Pe faţa ei întoarsă.

Ea îl privea cu un surâs,
El tremura-n oglindă,
Căci o urma adânc în vis
De suflet să se prindă.
Iar ea vorbind cu el în somn,
Oftând din greu suspină:
- O, dulce-al nopţii mele domn,
De ce nu vii tu? Vină!

Cobori în jos, luceafăr blând,
Alunecând pe-o rază,
Pătrunde-n casă şi în gând
Şi viaţa-mi luminează!

El asculta tremurător,
Se aprindea mai tare
Şi s-arunca fulgerător,
Se cufunda în mare;

Şi apa unde-au fost căzut
În cercuri se roteşte,
Şi din adânc necunoscut
Un mândru tânăr creşte.

Uşor el trece ca pe prag
Pe marginea ferestei
Şi ţine-n mână un toiag
Încununat cu trestii.

Părea un tânăr voievod
Cu păr de aur moale,
Un vânăt giulgi se-ncheie nod
Pe umerele goale."""

# Generate and print the summary
summary = generate_summary(input_text)
print(summary)