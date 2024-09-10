words = set()

def check(word):
      return word.lower() in words

def load(dictionary):
      with open(dictionary) as files:
            words.update(file.read().splitlines())
        return True

def size():
      return len(words)

def unload():
      return True

