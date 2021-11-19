//
// Created by alex on 19.11.2021.
//

#include "dino/headers.h"
#include "dino/generator.h"


using namespace std;


static void initDinoFacts(void);
static void initDinoSuffixes(void);


static vector<string> g_pseudo_facts;
static vector<string> g_suffixes;


string getDinoFact(void)
{
    int index = rand() % g_pseudo_facts.size();
    string result = g_pseudo_facts[index];
    return result;
}


string getDinoName(string base)
{
    int index = rand() % g_suffixes.size();
    string suffix = g_suffixes[index];
    string result = base + suffix;

    result[0] = toupper(result[0]);

    return result;
}


void initGenerator()
{
    initDinoFacts();
    initDinoSuffixes();
}


static void initDinoFacts(void)
{

    g_pseudo_facts.push_back("fed on any animals they could overpower");
    g_pseudo_facts.push_back(", like all other duck-billed dinosaurs,"
                             " were herbivorous animals that fed on leaves and cones on trees");
    g_pseudo_facts.push_back("occupies a special place in the history of paleontology - "
                             "it is the first dinosaur that people have learned about. "
                             "But it is still not entirely clear what he still looked like.");
    g_pseudo_facts.push_back("flourished on the territory of modern North America in the Late Cretaceous period, "
                             "side by side with the most powerful of predatory dinosaurs - Tyrannosaurus.");
    g_pseudo_facts.push_back("is a typical prosauropod: they had a small head, a long neck, "
                             "a massive trunk and a long tail");
    g_pseudo_facts.push_back("is the first described sauropod, "
                             "which gave the name to an entire group distinguished by a primitive structure "
                             "(solid, without cavities vertebrae, only 4 vertebrae "
                             "instead of 5 and even 6 in advanced sauropods, short, but strong and massive leg bones, "
                             "thick, wide feet, less long neck and tail fused in the pelvic region)");
}


static void initDinoSuffixes(void)
{
    g_suffixes.push_back("saurus");
    g_suffixes.push_back("raptor");
    g_suffixes.push_back("pteryx");
    g_suffixes.push_back("stacator");
    g_suffixes.push_back("rex");
    g_suffixes.push_back("ceratops");
    g_suffixes.push_back("gnathus");
    g_suffixes.push_back("roides");
    g_suffixes.push_back("draco");
}
