tests = [ { 'description': 'PINA 0x00 => PORTB: 0x00',
    'steps': [{'inputs': [('PINA',0x00)],'iterations': 2}],
    'expected': [('PORTB',0x00)],
    },
    	    { 'description': 'PINA 0x01 => PORTB: 0x01',
    'steps': [{'inputs': [('PINA',0x01)],'iterations':2}],
    'expected': [('PORTB',0x01)],
    },
    { 'description': 'PINA 0b0000_0101 => PORTB: 0x01',
    'steps': [{'inputs': [('PINA',5)],'iterations': 2}],
    'expected': [('PORTB',0x01)],
    },
    { 'description': 'PINA 0x02 => PORTB: 0x00',
    'steps': [{'inputs': [('PINA',0x02)],'iterations': 2}],
    'expected': [('PORTB',0x00)],
    },
    { 'description': 'PINA 0x03 => PORTB: 0x00',
    'steps': [{'inputs': [('PINA',0x03)],'iterations': 2}],
    'expected': [('PORTB',0x00)],
    },
    ]

#watch = ['PORTB']


