#!usr/bin/env
from IPython import embed


def funnel2(word):
    funnel = [word]
    max_funnel = funnel[:]
    old_words = []
    i = 0
    while i <= len(funnel[-1]):
        new_word = funnel[-1][:i] + funnel[-1][(i+1):]
        i += 1
        if new_word in word_list and new_word not in old_words:
            funnel.append(new_word)
            old_words.append(new_word)
            i=0
        if len(funnel) > len(max_funnel):
            max_funnel = funnel[:]
        if i == (len(funnel[-1])):
            funnel.pop()
            i=0
        if not funnel:
            break
    return (len(max_funnel), max_funnel)


def bonus1():
    return "bonus1"


def bonus2():
    return "bonus2"


with open("enable1.txt") as enable1:
    word_list = enable1.read().split('\n')
    print(funnel2("gnash"))
    print(funnel2("princesses"))
    print(funnel2("turntables"))
    print(funnel2("implosive"))
    print(funnel2("programmer"))

    #print(bonus1())
    #print(bonus2())
