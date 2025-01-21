General String Operations :

capitalize(): Converts the first character to uppercase.

casefold(): Converts the string to lowercase (more aggressive than lower()).

center(width, fillchar=' '): Centers the string in a field of given width, padding   with fillchar.

count(substring, start=0, end=len(string)): Counts occurrences of substring.

encode(encoding='utf-8', errors='strict'): Encodes the string into bytes.

endswith(suffix, start=0, end=len(string)): Checks if the string ends with suffix.

expandtabs(tabsize=8): Replaces tabs with spaces (default tab size = 8).

find(substring, start=0, end=len(string)): Returns the index of the first occurrence or -1 if not found.

format(*args, **kwargs): Formats the string.

format_map(mapping): Formats the string using a mapping object.

Character Classification:

isalnum(): Checks if all characters are alphanumeric.

isalpha(): Checks if all characters are alphabetic.

isascii(): Checks if all characters are ASCII.

isdecimal(): Checks if all characters are decimals.

isdigit(): Checks if all characters are digits.

isidentifier(): Checks if the string is a valid identifier.

islower(): Checks if all characters are lowercase.

isnumeric(): Checks if all characters are numeric.

isprintable(): Checks if all characters are printable.

isspace(): Checks if all characters are whitespace.

istitle(): Checks if the string is title-cased.

isupper(): Checks if all characters are uppercase.

String Modification:

join(iterable): Joins elements of iterable with the string as a separator.

ljust(width, fillchar=' '): Left-justifies the string.

lower(): Converts all characters to lowercase.

lstrip(chars=None): Removes leading characters (default: whitespace).

maketrans(x, y, z): Creates a translation table for translate().

partition(separator): Splits the string into a 3-tuple: before, separator, and after.

replace(old, new, count=-1): Replaces occurrences of old with new.

rfind(substring, start=0, end=len(string)): Returns the last index of substring or -1 if not found.

rindex(substring, start=0, end=len(string)): Like rfind() but raises an error if not found.

rjust(width, fillchar=' '): Right-justifies the string.

rpartition(separator): Splits the string into a 3-tuple: before, separator, and after (searches from the end).

rsplit(separator=None, maxsplit=-1): Splits the string from the end.

rstrip(chars=None): Removes trailing characters (default: whitespace).

split(separator=None, maxsplit=-1): Splits the string into a list.

splitlines(keepends=False): Splits the string at line breaks.

startswith(prefix, start=0, end=len(string)): Checks if the string starts with prefix.

strip(chars=None): Removes leading and trailing characters (default: whitespace).

swapcase(): Swaps case of all characters.

title(): Capitalizes the first letter of each word.

translate(table): Applies a translation table to the string.

upper(): Converts all characters to uppercase.

zfill(width): Pads the string with zeros on the left to reach width.