"""Functions to automate Conda airlines ticketing system."""


def generate_seat_letters(number):
    """Generate a series of letters for airline seats.

    Parameters:
        number (int): Total number of seat letters to be generated.

    Returns:
        generator: A generator that yields seat letters.

    Note:
        Seat letters are generated from A to D.
        After D the sequence starts again with A.
        For example: A, B, C, D, A, B

    """

    sequence = ["A", "B", "C", "D"]

    for num in range(number):
        yield sequence[num%4]

def generate_seats(number):
    """Generate a series of identifiers for airline seats.

    Parameters:
        number (int): The total number of seats to be generated.

    Returns:
        generator: A generator that yields seat numbers.

    Note:
        A seat number consists of the row number and the seat letter.
        There is no row 13, and each row has 4 seats.

        Seats should be sorted from low to high.
        For example: 3C, 3D, 4A, 4B

    """
    letter_iterator = generate_seat_letters(number)

    # we have the sequence that goes through A B C D
    # and once we loop four we need to increment the counter
    # by 1 except when 13 we skip

    counter = 0

    for letter in letter_iterator:
        if letter == "A":
            counter += 1
        if counter == 13:
            counter += 1
        yield str(counter) + letter

def assign_seats(passengers):
    """Assign seats to passengers.

    Parameters:
        passengers (list[str]): A list of strings containing names of passengers.

    Returns:
        dict: With passenger names as keys and seat numbers as values.
        Example output: {"Adele": "1A", "Björk": "1B"}

    """
    seats = generate_seats(len(passengers))
    assignment = {}

    for person, seat in zip(passengers, seats):
        assignment[person] = seat
        
    return assignment


def generate_codes(seat_numbers, flight_id):
    """Generate codes for a ticket.

    Parameters:
        seat_numbers (list[str]): A list of seat numbers.
        flight_id (str): A string containing the flight identifier.

    Returns:
        generator: A generator that yields 12 character long ticket codes.
    """

    for seat in seat_numbers:
        prefix = seat + flight_id
        yield prefix + "0" * (12 - len(prefix))
