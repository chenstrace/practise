from presidio_analyzer import Pattern, PatternRecognizer
from presidio_analyzer import AnalyzerEngine

# Define the regex pattern in a Presidio `Pattern` object:
numbers_pattern = Pattern(name="numbers_pattern", regex="\d+", score=0.5)

# Define the recognizer with one or more patterns
number_recognizer = PatternRecognizer(
    supported_entity="AGE", patterns=[numbers_pattern]
)


text2 = "I live in 510 Broad st. I am 12 years old"

numbers_result = number_recognizer.analyze(text=text2, entities=["AGE"])

print("Result:")
print(numbers_result)


analyzer = AnalyzerEngine()
analyzer.registry.add_recognizer(number_recognizer)

results = analyzer.analyze(text=text2, language="en")
print("Results:")
print(results)

print("Identified these PII entities:")
for result in results:
    print(f"- {text2[result.start:result.end]} as {result.entity_type}")
