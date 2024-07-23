import string
import random


def text_analysis(text):
    """
    Analyze the text to count word frequencies, filter common stopwords,
    and return the most frequent words.

    Parameters:
    text (str): The input text to analyze.

    Returns:
    dict: A dictionary with words as keys and their frequencies as values.
    """

    # List of common English stopwords
    stopwords = {
        'the', 'and', 'to', 'of', 'a', 'in', 'that', 'is', 'it', 'for', 'on',
        'with', 'as', 'was', 'he', 'be', 'at', 'by', 'an', 'this', 'which', 'or',
        'from', 'but', 'not', 'are', 'his', 'they', 'we', 'you', 'all', 'their',
        'can', 'her', 'has', 'there', 'been', 'if', 'will', 'more', 'when', 'would',
        'who', 'so', 'no', 'up', 'one', 'about', 'them', 'out', 'she', 'what', 'do',
        'just', 'my', 'into', 'your', 'me', 'him', 'could', 'than', 'its', 'our',
        'some', 'these', 'may', 'like', 'other', 'how', 'then', 'only', 'now', 'very',
        'over', 'any', 'most', 'after', 'also', 'new', 'where', 'because', 'such',
        'being', 'through', 'those', 'did', 'has', 'each', 'many'
    }

    # Normalize text to lowercase and remove punctuation
    translator = str.maketrans('', '', string.punctuation)
    text = text.lower().translate(translator)

    # Split text into words
    words = text.split()

    # Filter out stopwords
    filtered_words = [word for word in words if word not in stopwords]

    # Count word frequencies
    word_count = {}
    for word in filtered_words:
        if word in word_count:
            word_count[word] += 1
        else:
            word_count[word] = 1

    return word_count


def display_word_cloud(word_count):
    """
    Display a textual word cloud of the word frequencies.

    Parameters:
    word_count (dict): A dictionary with words as keys and their frequencies as values.
    """

    max_length = max(len(word) for word in word_count)
    for word, count in sorted(word_count.items(), key=lambda item: item[1], reverse=True):
        print(f"{word:>{max_length}}: {'*' * count}")


def generate_random_text(word_count, length=50):
    """
    Generate a random text based on word frequencies.

    Parameters:
    word_count (dict): A dictionary with words as keys and their frequencies as values.
    length (int): The length of the generated text.

    Returns:
    str: The generated random text.
    """
    words = list(word_count.keys())
    weights = list(word_count.values())
    generated_words = random.choices(words, weights=weights, k=length)
    
    return ' '.join(generated_words)


# Example usage:
if __name__ == "__main__":
    sample_text = (
        "This is a simple example. The purpose of this example is to demonstrate "
        "a basic text analysis function. This function will count the frequency of "
        "each word in the text and filter out common stopwords."
    )

    # Analyze the sample text
    result = text_analysis(sample_text)

    # Display the word cloud
    print("Word Cloud:")
    display_word_cloud(result)

    # Generate random text based on word frequencies
    print("\nGenerated Text:")
    print(generate_random_text(result))
