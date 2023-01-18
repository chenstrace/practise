from presidio_analyzer import AnalyzerEngine
from presidio_analyzer import PatternRecognizer

titles_list = [
    "Sir",
    "Ma'am",
    "Madam",
    "Mr.",
    "Mrs.",
    "Ms.",
    "Miss",
    "Dr.",
    "Professor",
]

titles_recognizer = PatternRecognizer(
    supported_entity="TITLE", deny_list=titles_list)

text1 = "I suspect Professor Plum, in the Dining Room, with the candlestick"
result = titles_recognizer.analyze(text1, entities=["TITLE"])
print(f"Result:\n {result}")


analyzer = AnalyzerEngine()
analyzer.registry.add_recognizer(titles_recognizer)

results = analyzer.analyze(text=text1, language="en")
print("Results:")
print(results)

print("Identified these PII entities:")
for result in results:
    print(f"- {text1[result.start:result.end]} as {result.entity_type}")
